void setup() //code qui sera lancer quand la carte va démarrer
{
  pinMode(3, OUTPUT); //On défini que le pin qui sera utilisé pour envoyer le courant (OUTPUT) sera le pin 3 (on lui donne la borne +)

}

void loop() // code executer en boucle jusqu'à que la carte soit éteinte

{
  digitalWrite(3,HIGH); //  digital permet de manipuler le pin et HIGH = on envoie du courant donc qu'on l'alumme
  delay(500); //On attend 500milli = 0,5 seconde car 1000milli= 1sec
  digitalWrite(3,LOW); // on coupe le courant
  delay(500); // on attend une demi seconde

}
