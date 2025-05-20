#include <Arduino.h>

#define LED1 12

void setup() {
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);
  Serial.println("Serial start");  // <-- ini di sini
}


void loop() {
  digitalWrite(LED1, LOW);    // LED nyala
  Serial.println("LED HIGH");
  delay(1000);
  digitalWrite(LED1, HIGH);   // LED mati
  Serial.println("LED LOW");
  delay(1000);
}
