//*************************************************************************************
/*
Project 07: follow me
Car follows the object
*/ 
#include <ESP32Servo.h>
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//ultrasonic sensor
#define TRIG_PIN 5 // set signals input of the ultrasonic sensor to gpio5.
#define ECHO_PIN 18 //set signals output of the ultrasonic sensor to gpio18.
long distance; //define distance variables

//servo
const int servoPin = 4;//set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

void setup() {
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
  pinMode(TRIG_PIN,OUTPUT);//set TRIG_PIN to OUTPUT.
  pinMode(ECHO_PIN,INPUT);//set ECHO_PIN to INPUT.
  
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
  myservo.write(90);  // the initial angle of the servo is set to 90° .
  delay(300);
}

void loop() {
  distance = checkdistance();//Get the distance measured by the ultrasonic sensor
  Serial.print(distance);//Send a pulse, calculate the distance in centimeters and print the result.
  Serial.println("cm");
  if(distance<8)//if distance is less than 8
  {
    back();//back
  }
  else if((distance>=8)&&(distance<13))//if 8≤distance<13
  {
    Stop();//stop
  }
  else if((distance>=13)&&(distance<35))//if 13≤distance<35.
  {
    front();//follow
  }
  else//
  {
    Stop();//stop
  }
}

float checkdistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  float distance = pulseIn(ECHO_PIN, HIGH) / 58.00;
  delay(10);
  return distance;
}
   
void front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 100); //the left motor outputs PWM 100
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 100); //the right motor outputs PWM 100
}
void Stop()//define state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); //the left motor outputs PWM 0.
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); //the right motor outputs PWM 0
}
//*************************************************************************************
