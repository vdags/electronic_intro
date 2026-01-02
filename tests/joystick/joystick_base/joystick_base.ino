const int pinX = A0;
const int pinY = A1;
const int pinBouton = 9;
 
void setup() {
   pinMode(pinBouton , INPUT_PULLUP);   //on active la résistance pull up 
   Serial.begin(9600);
}
 
void loop() {
   int X = 0;
   int Y = 0;
   bool boutonValeur = false;
 
   //on lit les valeurs
   X = analogRead(pinX);
   /*il est nécessaire de faire un pause entre les lectures des différents
   pins analogiques  si on veut éviter l'obtention double de la même
   lecture (dû au fonctionnement interne des pins) */
   delay(100);
   Y = analogRead(pinY);
   boutonValeur = digitalRead(pinBouton);
 
   //montrer les valeurs à l'écran
   Serial.print("X:" );
   Serial.print(X);
   Serial.print(" | Y: ");
   Serial.print(Y);
   Serial.print(" | Pulsateur: ");
   Serial.println(boutonValeur);
   delay(1000);
}