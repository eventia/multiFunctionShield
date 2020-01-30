#define POT1 A0

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print("Potentiometer reading: ");
  Serial.println(analogRead(POT1));
  /* Wait 0.5 seconds before reading again */
  delay(500);
}
