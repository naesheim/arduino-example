#include <Arduino.h>

int led_int = 8;

void setup();
void loop();

void setup() {
  Serial.begin(9600);
  pinMode(led_int, OUTPUT);
}

void loop() {
  delay(2000);
  digitalWrite(led_int,HIGH);
  delay(2000);
  digitalWrite(led_int,LOW);
}