#include <servo.h>

int dist = 0;
long readUltrasonicDistance(int triggerPin,int echopin);
{
  PinMode(triggerPin,OUTPUT);
  digitalWrite(triggerPin,LOW);
  delayMicroseconde(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconde(10);
  digitalWrite(triggerpin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin,HIGH);
}

Servo servo_8;

void setup()
{
  servo_8attach(8);
  
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);

}

void loop()
  
{
    sen1Value = 0.01723 * readUltrasonicDistance(6, 6);

  if (sen1Value < 100) 
  	{
    	servo_8.write(90);
    Serial.print(" 	  || Door Open!  ; Distance = ");
    Serial.print(sen1Value);
   Serial.print("\n");
 
  	} 
  else 
  	{
    	servo_7.write(0);
    Serial.print(" 	  || Door Closed! ; Distance =  ");
    Serial.print(sen1Value);
    Serial.print("\n");
  }
  delay(10); // Delay a little bit to improve simulation performance