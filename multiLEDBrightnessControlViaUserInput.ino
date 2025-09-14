int redPin=11;
int yellowPin=10;
int greenPin=9;
int baudRate=9600;
int userBrightness;
int brightness;
String userLED;
String ledQuestion="Which colour of LED would you like to turn on?";
String brightnessQuestion="What brightness would you like you LED (0-10)?";
String tryAgain="That LED colour does not exist. Please input an existing colour (red, yellow, green, off)";
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(baudRate);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(ledQuestion);
while (Serial.available()==0) {}
userLED = Serial.readString();

Serial.println(brightnessQuestion);
while (Serial.available() == 0);
userBrightness = Serial.parseInt();

brightness = pow(2,(userBrightness*(8./10.))-1);

userLED.toLowerCase();

if (userLED == "red"){
  analogWrite(redPin,brightness);
  analogWrite(yellowPin,0);
  analogWrite(greenPin,0);
}
if (userLED == "yellow"){
  analogWrite(redPin,0);
  analogWrite(yellowPin,brightness);
  analogWrite(greenPin,0);
  
}
if (userLED == "green"){
  analogWrite(redPin,0);
  analogWrite(yellowPin,0);
  analogWrite(greenPin,brightness);
  
}

  
  



}