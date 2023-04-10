#include <Arduino.h>
const int ledPin = 2; // ประกาศตัวแปรขา D2/GPIO2 สำหรับเชื่อมต่อกับ LED เป็นค่าคงที่

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // กำหนดขา D2/GPIO2 ให้เป็นขา OUTPUT
  Serial.begin(9600); // กำหนดความเร็วการสื่อสาร Serial ให้เป็น 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){ // ถ้ามีข้อมูลที่รับเข้ามาใน Serial
    int inRead = Serial.read(); // อ่านข้อมูลที่รับเข้ามาใน Serial
    if (inRead == '1'){ // ถ้าข้อมูลที่รับเข้ามาเป็น 1
      digitalWrite(ledPin, LOW); // กำหนดให้ LED ติด
      Serial.print("LED ON"); // แสดงข้อความ LED ON บน Serial Monitor
    } else if(inRead == '0'){ // ถ้าข้อมูลที่รับเข้ามาเป็น 0
      digitalWrite(ledPin, HIGH); // กำหนดให้ LED ดับ
      Serial.print("LED OFF"); // แสดงข้อความ LED OFF บน Serial Monitor
    } else if (inRead > '1'){
      Serial.print("Please enter 0 or 1 only!!!"); // แสดงข้อความ Invalid Input บน Serial Monitor
    }
    delay(100);
  }
}
