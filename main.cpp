#include <Arduino.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(4800);
  delay(100);
  Serial.print("Hello Test! ");
  Serial.println("I am testing a program.");
  int a, b, c;	
  a = 10;
  b = 20;
  c = a + b;
  Serial.print("Value a = ");
  Serial.println(a);
  Serial.print("Value b = ");
  Serial.println(b);
  Serial.print("Value c = ");
  Serial.println(c);
}

void loop() {
  // put your main code here, to run repeatedly:
}