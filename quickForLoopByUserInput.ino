int redPin=9;
int greenPin=10;
int baudRate=115200;
int numBlinks;
String blinkQuestion="How many blinks do you want?";
int i;
int delayT = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(baudRate);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(blinkQuestion);
while(Serial.available()==0){}
numBlinks = Serial.parseInt();

for (i=0; i<numBlinks; i++)
{
analogWrite(redPin,255);
analogWrite(greenPin,0);
delay(delayT);
analogWrite(redPin,0);
analogWrite(greenPin,255);
delay(delayT);
analogWrite(redPin,0);
analogWrite(greenPin,0);
delay(delayT);
}




Serial.println("code finished");

}
