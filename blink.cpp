#include <Arduino.h>
int led_int = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led_int, OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(led_int,HIGH);
  delay(1000);
  digitalWrite(led_int,LOW);
}
