int triggerPin = 7;
int echoPin = 6;
unsigned long duration;
int distance;
int pinSensor =2;
int pinLed =12;
int pinBuzzer =13;
int pirSensor =0;

void setup()
{
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode(pinSensor, INPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);

}

void loop()
{
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  //clearing the trigger
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  // capturing the time duration for sound wave to travel in microseconds
  duration = pulseIn(echoPin, HIGH);
  distance = 0.01723 * duration;
  Serial.print(distance);
  Serial.println("cm");

  pirSensor = digitalRead(pinSensor);
  if (pirSensor == HIGH)
  {

    digitalWrite(pinLed, HIGH);
    tone(pinBuzzer, 1000, 500);

  }

  else {

    digitalWrite(pinLed, LOW);
  }

  delay(10);
}