//*************************************************************************************
/*
Project 08: avoid obstacles
*/  
#include <ESP32Servo.h>
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//ultrasonic sensor
#define TRIG_PIN 5 // Define the signal input of the ultrasonic sensor as gpio5.
#define ECHO_PIN 18 // Define the signal output of the ultrasonic sensor as gpio18.
long distance,a1,a2;//define three distance variables

//servo
const int servoPin = 4; //set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

void setup() {
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT); //set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
  pinMode(TRIG_PIN,OUTPUT); //set TRIG_PIN to OUTPUT.
  pinMode(ECHO_PIN,INPUT); //set ECHO_PIN to INPUT.
  
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
  myservo.write(90);
  delay(500);
}
 
void loop()
 {
  avoid();//obstacle avoidance
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

void avoid()
{
  distance = checkdistance(); //Get the value of ultrasonic distance
  Serial.println(distance);
  if((distance < 10)&&(distance != 0))//if 0<distance<10
  {
    car_Stop();//stop
    delay(100);
    myservo.write(180);  //the servo turns to 180°. 
    delay(500);
    a1=checkdistance();//Measuring distance
    delay(100);
    myservo.write(0); //the servo turns to 0°. 
    delay(500);
    a2=checkdistance();//Measuring distance
    delay(100);

    if(a1 > a2)//
    {
      car_left();//turn left
      delay(100);
      myservo.write(90); //the initial angle of the servo is set to 90° .
      delay(500);
    }
    else//if left distance < right distance
    {
      car_right();//turn right
      delay(100);
      myservo.write(90); //the initial angle of the servo is set to 90° .
      delay(500);
    }
  }
  else//
  {
    car_front();//go forward   
  }
}

void car_front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 100); //the left motor outputs PWM 100
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 100); //the right motor outputs PWM 100
}
void car_back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 100); //the left motor outputs PWM 100
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 100); //the right motor outputs PWM 100
}
void car_left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 100); //the left motor outputs PWM 100
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 100); //the right motor outputs PWM 100
}
void car_right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 100); //the left motor outputs PWM 100
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 100); //the right motor outputs PWM 100
}
void car_Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); //the left motor outputs PWM 0 
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); //the right motor outputs PWM 0
}                                                                
//*************************************************************************************
