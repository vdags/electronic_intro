int axey = A1;   // Entrée de référence pour l'axe Y.
int axex = A0;   // Entrée de référence pour l'axe X.
int ledup = 12;   // Led supérieur.
int ledD = 13;    // Led inférieur.
int ledL = 10;    // Led gauche.
int ledR = 11;    // Led droite.
int valeurX;
int valeurY;

void setup() {  
  Serial.begin(9600);
  /* Définition des leds
  comme sorties */
  pinMode(ledup, OUTPUT);
  pinMode(ledD, OUTPUT); 
  pinMode(ledL, OUTPUT); 
  pinMode(ledR, OUTPUT); 
}
 
void loop() {  
  valeurX = analogRead(axex);
  if (valeurX > 700){ // droite
    digitalWrite(ledR,HIGH);
    Serial.print("x = ");
    Serial.println(valeurX);
  }else{
    digitalWrite(ledR, LOW );
  }
  
  valeurX = analogRead(axex);
  if (valeurX < 400){  // gauche
    digitalWrite(ledL,HIGH);
    Serial.print("x = ");
    Serial.println(valeurX);
  }else{
    digitalWrite(ledL, LOW );
  }
  
  valeurY = analogRead(axey);
  if (valeurY > 700){  // en haut
    digitalWrite(ledup,HIGH);
    Serial.print("y = ");
    Serial.println(valeurY);
  }else{
    digitalWrite(ledup, LOW );
  }
 
  valeurY = analogRead(axey);
  if (valeurY < 400){  // en bas
    digitalWrite(ledD,HIGH);
    Serial.print("y = ");
    Serial.println(valeurY);
  }else{
    digitalWrite(ledD, LOW );
  }
}