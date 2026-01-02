int a=7; 
int b=6; 
int c=5; 
int d=11; 
int e=10; 
int  f=8; 
int g=9; 
int dp=4; 
//display number 1
void display1(void) 
{  
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
} 
//display number2
void  display2(void) 
{
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
}  
// display number3
void display3(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
} 
// display number4
void display4(void) 
{  
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  
} 
// display number5
void display5(void)  
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
} 
// display number6
void  display6(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
} 
// display number7
void display7(void)  
{   
   digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
}  
// display number8
void display8(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
} 
void clearDisplay(void) 
{ 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
  digitalWrite(c,LOW);
    digitalWrite(d,LOW);  
    digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
} 
void display9(void)  
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
  digitalWrite(f,HIGH);  
} 
void display0(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
} 
void setup() 
{ 
    int i;
    for(i=4;i<=11;i++)  
        pinMode(i,OUTPUT);
    pinMode(13, OUTPUT);
} 
void loop() 
{     
    while(1) 
    { digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      clearDisplay();
  display0(); 
        delay(2000); 
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display1(); 
        delay(2000); 
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display2();  
        delay(2000); 
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display3(); 
        delay(2000);
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display4(); 
        delay(2000);
        clearDisplay(); 
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display5(); 
        delay(2000);
        clearDisplay();  
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display6(); 
        delay(2000);
        clearDisplay(); 
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display7(); 
        delay(2000); 
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
        display8();  
        delay(2000); 
        clearDisplay();
        digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW  
        display9(); 
        delay(2000); 
             
    }
}