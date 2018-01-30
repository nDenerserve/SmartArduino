#include <SmartArduino.h>

SmartArduino smart;

void setup() {
  Serial.begin(9600);
}

void loop() {
  smart.read();
  Serial.println(smart.pac);
  delay(1000);
}