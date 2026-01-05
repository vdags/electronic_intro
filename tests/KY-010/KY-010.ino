int Led = 13;     // Déclaration de la broche de la LED
int Sensor = 10;  // Déclaration de la broche de signal du capteur
int val;          // Variable temporaire

void setup()
{
  pinMode(Led, OUTPUT);    // Initialise la broche de la LED en tant que sortie
  pinMode(Sensor, INPUT);  // Initialise la broche de signal du capteur en tant qu'entrée
}

void loop()
{
  val = digitalRead(Sensor);  // Lit l'état du signal du capteur

  if (val == HIGH)  // Si un signal est détecté (interruption optique)
  {
    digitalWrite(Led, HIGH);  // Allume la LED
  }
  else
  {
    digitalWrite(Led, LOW);   // Éteint la LED
  }
}