const byte LED[] = {13,12,11,10};
#define POT1 0

void setup(){
  Serial.begin(9600);

  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
}

void loop(){
  int potValue;

  potValue = analogRead(POT1);
  /* Wait 0.5 seconds before reading again */
  if(potValue < 400)
  {
  digitalWrite(LED[0], LOW);
  digitalWrite(LED[1], LOW);
  digitalWrite(LED[2], LOW);
  digitalWrite(LED[3], LOW);
  Serial.print("Potentiometer: ");
  Serial.println(potValue);
  }
  else
  {
  digitalWrite(LED[0], HIGH);
  digitalWrite(LED[1], HIGH);
  digitalWrite(LED[2], HIGH);
  digitalWrite(LED[3], HIGH);
  Serial.print("Potentiometer: ");
  Serial.println(potValue);
  }
  delay(500);
}
