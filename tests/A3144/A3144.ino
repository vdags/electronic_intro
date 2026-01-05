const int HALLPin = 5;
const int LEDPin = 13;

void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(HALLPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(HALLPin)==LOW)
  {
    digitalWrite(LEDPin, HIGH);   
    Serial.print("Field detected\n");
  }
  else
  {
    digitalWrite(LEDPin, LOW);
    Serial.print("No field detected\n");
  }
}
