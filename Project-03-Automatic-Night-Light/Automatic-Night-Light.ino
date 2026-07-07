const int sensorPin = A0;
const int ledPin = 3;

int lightValue;

void setup()
{
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  lightValue = analogRead(sensorPin);

  Serial.println(lightValue);

  if (lightValue < 400)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
