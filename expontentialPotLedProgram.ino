int redPin=11;
int potPin=A2;
int potVal;
int brightness;
int baudRate=9600;
String msg1="Your potVal is: ";
String msg2="Your brightness is: ";
void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(potPin,INPUT);
Serial.begin(baudRate);

}


void loop() {
  // put your main code here, to run repeatedly:

potVal = analogRead(potPin);
brightness = pow(2,(potVal*(8/1023.0)))-1;
analogWrite(redPin,brightness);
Serial.print(msg1);
Serial.print(potVal);
Serial.print("    ");
Serial.print(msg2);
Serial.println(brightness);






}

