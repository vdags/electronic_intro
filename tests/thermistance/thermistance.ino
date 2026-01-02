int a;
float ctemperature;
int B=3975; 
float resistance;

void setup()
{
  Serial.begin(9600);  
}

void loop()
{
  a=analogRead(0);
  resistance=(float)(1023-a)*10000/a; 
  ctemperature=1/(log(resistance/10000)/B+1/298.15)-273.15;
  Serial.print(ctemperature);
  Serial.write(186);
  Serial.println("C ");
  delay(1000);
}