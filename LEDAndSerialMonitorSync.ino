int baudRate=9600;
int redPin=9;
int greenPin=10;
int bluePin=11;
int highColour=255;
int medColour=(69);
int lowColour=(0);
String userColour;
String selectMsg = "Which colour would you like (Red, Green, Blue, Orange, Magenta, Cyan, White?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baudRate);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(selectMsg);
Serial.println();
while(Serial.available()==0){}
userColour = Serial.readString();
userColour.toLowerCase();

if (userColour == "red") {
  analogWrite(redPin,highColour);
  analogWrite(greenPin,lowColour);
  analogWrite(bluePin,lowColour);
}
if (userColour == "green") {
  analogWrite(redPin,lowColour);
  analogWrite(greenPin,highColour);
  analogWrite(bluePin,lowColour);
}
if (userColour == "blue") {
  analogWrite(redPin,lowColour);
  analogWrite(greenPin,lowColour);
  analogWrite(bluePin,highColour);
}
if (userColour == "cyan") {
  analogWrite(redPin,lowColour);
  analogWrite(greenPin,highColour);
  analogWrite(bluePin,highColour);
}
if (userColour == "magenta") {
  analogWrite(redPin,highColour);
  analogWrite(greenPin,lowColour);
  analogWrite(bluePin,highColour);
}
if (userColour == "orange") {
  analogWrite(redPin,highColour);
  analogWrite(greenPin,medColour);
  analogWrite(bluePin,lowColour);
}
if (userColour == "white") {
  analogWrite(redPin,highColour);
  analogWrite(greenPin,highColour);
  analogWrite(bluePin,highColour);
}
if (userColour == "off") {
  analogWrite(redPin,lowColour);
  analogWrite(greenPin,lowColour);
  analogWrite(bluePin,lowColour);
}
}
