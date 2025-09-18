#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println(F("Started up..."));
}

void loop() {
  Serial.println("loop");
  delay(1000);
}