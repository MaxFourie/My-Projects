int baudRate=9600;
int redPin=11;
int userInput;
int inputConversion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(baudRate);
  pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What brightness would you like your LED(0-10)? ");
while(Serial.available() == 0){}
userInput = Serial.parseInt();
inputConversion = pow(2,(4.0/5.0)*userInput)-1;
analogWrite(redPin,inputConversion);
}
