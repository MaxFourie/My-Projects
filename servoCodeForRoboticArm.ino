#include <Servo.h>
int baudRate=9600;
int dt=50;

int servoPin1=3;
int servoPin2=5;
int servoPin3=6;
int servoPin4=9;
int servoPin5=10;
int servoPin6=11;

int potPin1=A0;
int potPin2=A1;
int potPin3=A2;
int potPin4=A3;
int potPin5=A4;
int potPin6=A5;

int servoAngle1;
int servoAngle2;
int servoAngle3;
int servoAngle4;
int servoAngle5;
int servoAngle6;

int potInput1;
int potInput2;
int potInput3;
int potInput4;
int potInput5;
int potInput6;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;



void setup() {
  // put your setup code here, to run once:
Serial.begin(baudRate);
servo1.attach(servoPin1);
servo2.attach(servoPin2);
servo3.attach(servoPin3);
servo4.attach(servoPin4);
servo5.attach(servoPin5);
servo6.attach(servoPin6);

pinMode(potPin1,INPUT);
pinMode(potPin2,INPUT);
pinMode(potPin3,INPUT);
pinMode(potPin4,INPUT);
pinMode(potPin5,INPUT);
pinMode(potPin6,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  potInput1 = analogRead(potPin1);
  servoAngle1 = potInput1*(180.0/1023.0);
  servo1.write(servoAngle1);
  delay(dt);

  potInput2 = analogRead(potPin2);
  servoAngle2 = potInput2*(180.0/1023.0);
  servo2.write(servoAngle2);
  delay(dt);

  potInput3 = analogRead(potPin3);
  servoAngle3 = potInput3*(180.0/1023.0);
  servo3.write(servoAngle3);
  delay(dt);

  potInput4 = analogRead(potPin4);
  servoAngle4 = potInput4*(180.0/1023.0);
  servo4.write(servoAngle4);
  delay(dt);

  potInput5 = analogRead(potPin5);
  servoAngle5 = potInput5*(180.0/1023.0);
  servo5.write(servoAngle5);
  delay(dt);

  potInput6 = analogRead(potPin6);
  servoAngle6 = potInput6*(180.0/1023.0);
  servo6.write(servoAngle6);
  delay(dt);
}
