int bluePin=11;
int greenPin=10;
int redPin=9;
int LEDGap=100;
int reset=500;
int baudRate=9600;
int numBlinks;
int counter;
String blinkPrompt="How many blinks would you like?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baudRate);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
counter = 0;
Serial.println(blinkPrompt);
while(Serial.available()==0){}
numBlinks=Serial.parseInt();

while (counter < numBlinks){
digitalWrite(redPin,HIGH);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
delay(LEDGap);
digitalWrite(redPin,LOW);
digitalWrite(bluePin,HIGH);
digitalWrite(greenPin,LOW);
delay(LEDGap);
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,HIGH);
delay(LEDGap);
digitalWrite(redPin,LOW);
digitalWrite(bluePin,LOW);
digitalWrite(greenPin,LOW);
delay(reset);
counter = counter + 1;
}



}
