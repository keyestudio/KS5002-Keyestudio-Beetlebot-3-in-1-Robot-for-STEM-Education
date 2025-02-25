#include <Arduino.h>
#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo

int servoPin = 4; // Servo motor pin

void setup() {
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object

  myservo.write(90);  // the angle of the steering gear is 90°.
  delay(1000);
  myservo.write(0);  // the angle of the steering gear is 0°.
  delay(1000);
  myservo.write(90);  // the angle of the steering gear is 90°.
  delay(1000);
}
void loop() {

}
