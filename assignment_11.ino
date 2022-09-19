int trigger pin =2;
int echo pin =3;
int buzzer pin =10;
int time;
iny distance;
void setup()
{
     serial.being (9600);
     pinMode (triggerpin,OUTPUT);
     pinMode (echopin, INPUT);
     pinMode (buzzerpin, OUTPUT);
}
void loop()
{
      digitalWrite (triggerpin,HIGH);
      delayMicroseconds (10);
      digitalWrite (triggerpin,LOW);
      time = pulseIn (echopin, HIGH);
      distance = (time*0.034) / 2;
  
  if (distance <= 10)
  {
    serial.printIn (" Door Open ");
    serial.print (" Distance= ");
    serial.printIn (distance);
    digitalWrite (buzzerpin, HIGH);
    delay (500);
  }
  else {
        serial.printIn ("Door closed ");
        serial.print ("Distance= ");
        serial.printIn (distance);
        digitalWrite (buzzerpin, LOW);
        delay (500);
  }
  } 
       
       
       
       
       
 
