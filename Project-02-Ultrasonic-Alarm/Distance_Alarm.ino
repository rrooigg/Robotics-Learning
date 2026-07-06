#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;

const int redLED = 2;
const int greenLED = 3;
const int buzzer = 7;

long duration;
int distance;

Servo myServo;
const int servoPin =5;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(0); 

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if(distance <= 30)
  {
      digitalWrite(redLED, HIGH);
      digitalWrite(greenLED, LOW);

      tone(buzzer, 1000);
      myServo.write(90);
  }
  else
  {
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);

      noTone(buzzer);
      myServo.write(0); 
  }

  delay(100);
}