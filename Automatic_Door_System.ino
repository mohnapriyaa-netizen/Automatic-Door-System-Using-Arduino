#include <Servo.h>

Servo door;

const int trigPin = 9;
const int echoPin = 10;

long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  door.attach(3);      // Servo connected to Pin 3
  door.write(0);       // Door initially closed

  Serial.begin(9600);
}

void loop()
{
  // Clear TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read ECHO
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Door Logic
  if (distance > 0 && distance < 20)
  {
    door.write(90);      // Open Door
    Serial.println("Door Open");
  }
  else
  {
    door.write(0);       // Close Door
    Serial.println("Door Closed");
  }

  delay(500);
}
