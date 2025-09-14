int butPin = 2;
int redPin = 10;
int br = 9600;
int butVal;
int latch = 0;
int dt = 50;



void setup() {
  // put your setup code here, to run once:
  pinMode(butPin,INPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(br);
}

void loop() {
  // put your main code here, to run repeatedly:
if (latch > 1){
  latch = 0;
}
butVal = digitalRead(butPin);
Serial.print("button value = ");
Serial.println(butVal);

if (butVal==0){
  latch = latch + 1;
}

if (latch == 1){
digitalWrite(redPin,HIGH);
}
if (latch ==0){
  digitalWrite(redPin,LOW);
}

Serial.print("the latch value is ");
Serial.println(latch);
}



