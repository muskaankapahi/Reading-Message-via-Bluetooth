#include <SoftwareSerial.h>
SoftwareSerial bt(0,1);
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(6, OUTPUT);
bt.begin(9600);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
String input;
input= bt.readString();
Serial.println(input);
if(input=="On")
{
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  }
  else if(input=="Off")
  {
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
  }
  delay(1000);
}
