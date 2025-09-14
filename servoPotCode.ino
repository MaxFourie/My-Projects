#include <Servo.h>
int baudRate=9600;
int servoPin=9;
int potPin=A2;
int dt=50;
int servoAngle;
int potInput;

Servo myServo;


void setup() {
  // put your setup code here, to run once:
Serial.begin(baudRate);
myServo.attach(servoPin);
pinMode(potPin,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  potInput = analogRead(potPin);
  servoAngle = potInput*(180.0/1023.0);
  myServo.write(servoAngle);
  delay(dt);
}
