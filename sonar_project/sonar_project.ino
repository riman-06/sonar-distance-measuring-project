#include <stdio.h>
const int trigPin=6;
const int echoPin=10;

void setup() {
  pinMode (trigPin,OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (3,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (4,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  long duration,distance;
  
  digitalWrite(trigPin,LOW);
  delay (2);
  digitalWrite (trigPin,HIGH);
  delay(10);
  digitalWrite (trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance = duration*0.034/2; //speed unit is cm/microseconds

  if(distance<=20)
  {
    digitalWrite (4,HIGH);
    delay (500);
    digitalWrite (4,LOW);
  }
  if(distance>=80)
  {
    digitalWrite (2,HIGH);
    delay (500);
    digitalWrite (2,LOW);
  }
  if (distance>20 && distance<80) 
  {
    digitalWrite (3,HIGH);
    delay (500);
    digitalWrite (3,LOW);
  }
  
 
}
