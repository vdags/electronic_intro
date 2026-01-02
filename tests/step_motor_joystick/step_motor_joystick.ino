#include <math.h>     //Uses math library for atan2 and degree functions
#include <Stepper.h>  //Uses stepper library to control stepper motor

// Arduino pin numbers
const int SW_pin = 2;     // digital pin connected to switch output
const int X_pin = 1;      // analog pin connected to X output
const int Y_pin = 0;      // analog pin connected to Y output
int X_Point = analogRead(X_pin); //reads initial state of X pin
int Y_Point = analogRead(Y_pin); //reads initial state of Y pin

int Joystick_Angle = 0;
int Joystick_Angle2 = 0;
int Motor_Angle = 0;
int diff = 0;

const int stepsPerRevolution = 2048; // Define number of steps per rotation of 28byj-48 stepper


Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11); // Create stepper object called 'myStepper', note the pin order:


void setup() {
  pinMode(SW_pin, INPUT);     // Joystick Switch is conected to digital pin 2
  digitalWrite(SW_pin, HIGH); // set pin 2 to high
  Serial.begin(9600);         // Open serial port to display feedback
  myStepper.setSpeed(12);     // Set the speed to 12 rpm:
}


int ZeroX(int Value) { //This function subtracts the initial(i.e.) resting X value from the call, setting the zero point
  int Result;
  Result = Value - 502;  //Detecting the X value on startup was unreliable, so this value is used instead
  return Result;
}

int ZeroY(int Value) {  //This function subtracts the initial(i.e.) resting Y value from the call, setting the zero point
  int Result;
  Result = Value - 494;   //Detecting the Y value on startup was unreliable, so this value is used instead
  return Result;
}

int GetAngle() { //reads x/y coords of joystick and converts to degrees
  int Result;
  Result = degrees(atan2(ZeroY(analogRead(Y_pin)), ZeroX(analogRead(X_pin))));
  return Result;
}

void loop() {

  while (digitalRead(SW_pin) == 0)  //if switch is pressed, rotate motor until switch is released. Allows for resetting position
  {
    myStepper.step(10);
    delay(10);
  }


  Joystick_Angle = (GetAngle());                   //reads x/y coords of joystick and converts to degrees
  delay(10);
  Joystick_Angle2 = (GetAngle());                  // reads angle again after 10ms

  if (Joystick_Angle == Joystick_Angle2)
  {

    while (Joystick_Angle != 0)                   //If non zero degree, move to that angle
    {
      myStepper.step(Joystick_Angle * -5.689);    //moves stepper Joystick_Angle * 5.689 steps
      Motor_Angle = Joystick_Angle;               //Set Motor Angle to joystick angle
      while (Motor_Angle == Joystick_Angle) {    //If angle of joystick matches motor angle, do nothing.
        Joystick_Angle = (GetAngle());           //Check if joystick has moved
      }

      while (Motor_Angle != 0) {

        Joystick_Angle = (GetAngle());                   //reads x/y coords of joystick and converts to degrees
        delay(10);
        Joystick_Angle2 = (GetAngle());                  // reads angle again after 10ms
        if (Joystick_Angle == Joystick_Angle2)
        {
          //Joystick has homed to neutral position
          if (Joystick_Angle == 0) {                     //If Joystick is at zero angle
            myStepper.step(Motor_Angle * 5.689);        //Move motor back to home
            Motor_Angle = 0;                            //Set Motor Angle to zero
          }

          // Wraparound case 

          else if (
            (((Joystick_Angle ^ Motor_Angle) < 0) == true)    // Checks if joystick and motor have opposite signs,
            &&
            ((abs(Joystick_Angle) + abs(Motor_Angle)) > 180)  // AND that abs(total) > 180
          )
          {
            if (Motor_Angle > 0) {        //if motor is positive, move anticlockwise

              myStepper.step(-(360 - abs(Joystick_Angle) - Motor_Angle) * 5.689); // Amount to move in steps
              Motor_Angle = Joystick_Angle;     // Motor angle is now set to joystick angle
            }

            else if (Motor_Angle < 0) {   //if motor is negative, move clockwise

              myStepper.step(((360 - Joystick_Angle) - abs(Motor_Angle)) * 5.689);  // Amount to move in steps
              Motor_Angle = Joystick_Angle;     // Motor angle is now set to joystick angle
            }

          }
 
          //Joystick has proceded
          else if (Joystick_Angle > Motor_Angle) {      // If joystick angle has increased
            diff = Joystick_Angle - Motor_Angle;        // work out difference   **UNTESTED CHANGE HERE ("diff =" added)**
            Motor_Angle = Motor_Angle + diff;           // update motor angle
            myStepper.step(-diff * 5.689);              // Move diff steps
          }
          
          //joystick has receeded
          else if (Joystick_Angle < Motor_Angle) {      // If joystick angle has decreased
            diff = Motor_Angle - Joystick_Angle;        // work out difference    **UNTESTED CHANGE HERE ("diff =" added ??)**
            Motor_Angle = Motor_Angle - diff;           // update motor angle
            myStepper.step(diff * 5.689);               // Move diff steps
          }

        }
      }
    } //END while (Joystick_Angle !=0)
  } //END if
}
