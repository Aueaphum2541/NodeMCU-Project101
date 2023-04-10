#include <Arduino.h>
const int ledPin = 2; // ประกาศตัวแปรขา D2/GPIO2 สำหรับเชื่อมต่อกับ LED เป็นค่าคงที่
int timeOn = 1500; // ประกาศตัวแปรเวลาที่ต้องการให้ LED ติด 1500 มิลลิวินาที
int timeOff = 2000; // ประกาศตัวแปรเวลาที่ต้องการให้ LED ดับ 2000 มิลลิวินาที
float totalTime = (timeOn + timeOff) / 1000; // ประกาศตัวแปรวงรอบระยะเวลาที่หลอดไฟ LED ติดและดับ เป็นค่าตัวเลขที่มีจุดทศนิยมแสดงเป็นวินาที

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // กำหนดขา D2/GPIO2 ให้เป็นขา OUTPUT
  Serial.begin(9600); // กำหนดความเร็วการสื่อสาร Serial ให้เป็น 9600
  delay(100);
  Serial.print("Cycle time on/off LED = "); // พิมพ์ข้อความใน "" เว้นวรรค และไม่ขึ้นบรรทัดใหม่ 
  Serial.print(totalTime); // พิมพ์ค่าตัวแปร totalTime 
  Serial.println(" seconds"); // พิมพ์ข้อความใน "" และขึ้นบรรทัดใหม่
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // กำหนดขา D2/GPIO2 ให้เป็น HIGH หรือ 3.3V
  Serial.println("LED ON"); // พิมพ์ข้อความใน "" และขึ้นบรรทัดใหม่
  delay(timeOn); // รอเวลาตามที่กำหนดในตัวแปร timeOn
  digitalWrite(ledPin, LOW); // กำหนดขา D2/GPIO2 ให้เป็น LOW หรือ 0V
  Serial.println("LED OFF"); // พิมพ์ข้อความใน "" และขึ้นบรรทัดใหม่
  delay(timeOff); // รอเวลาตามที่กำหนดในตัวแปร timeOff
}
