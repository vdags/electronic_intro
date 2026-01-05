//Parameters
const int ilsPin = 2;

//Variables
bool ilsStatus = false;

void setup() {
  //Init Serial USB
  Serial.begin(9600);
  Serial.println(F("Initialize System"));
  //Init digital input
  pinMode(ilsPin, INPUT);
}

void loop() {
  readReedSwitch();
}

void readReedSwitch( ) { /* function readReedSwitch */
  ////Test routine for ReedSwitch
  ilsStatus = digitalRead(ilsPin);
  Serial.println(ilsStatus);
  delay(100);


}