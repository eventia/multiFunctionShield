#define LED  13
// int LED = 13;
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}

// Step 1. # 전처리기 사용
// int led =13;  대신 전처리기 #define LED 13 을 써보자.
