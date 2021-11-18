#include <Arduino.h>

int led_int = 8;

void setup();
void loop();

void setup() {
  Serial.begin(9600);
  pinMode(led_int, OUTPUT);
}

void loop() {
  delay(100);
  digitalWrite(led_int,HIGH);
  Serial.println("yolo");
  delay(100);
  digitalWrite(led_int,LOW);
}