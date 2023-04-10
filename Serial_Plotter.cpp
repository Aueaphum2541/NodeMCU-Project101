#include <Arduino.h>
const int ledPin = 2; // ประกาศตัวแปรขา D2/GPIO2 สำหรับเชื่อมต่อกับ LED เป็นค่าคงที่
int timeOn = 1000; // ประกาศตัวแปรเวลาที่ต้องการให้ LED ติดเป็นค่าคงที่ 1 วินาที
int timeOff = 2000; // ประกาศตัวแปรเวลาที่ต้องการให้ LED ดับเป็นค่าคงที่ 2 วินาที

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // กำหนดขา D2/GPIO2 ให้เป็นขา OUTPUT
  Serial.begin(9600); // กำหนดความเร็วการสื่อสาร Serial ให้เป็น 9600
}

void loop() {
  digitalWrite(ledPin, HIGH); // กำหนดให้ขา D2/GPIO2 มีค่า HIGH หรือ 3.3V
  Serial.println(1); // ส่งข้อมูล 1 ไปยัง Serial Monitor
  delay(timeOn); // รอเวลาตามที่กำหนดไว้ในตัวแปร timeOn
  digitalWrite(ledPin, LOW); // กำหนดให้ขา D2/GPIO2 มีค่า LOW หรือ 0V
  Serial.println(0); // ส่งข้อมูล 0 ไปยัง Serial Monitor
  delay(timeOff); // รอเวลาตามที่กำหนดไว้ในตัวแปร timeOff
}
