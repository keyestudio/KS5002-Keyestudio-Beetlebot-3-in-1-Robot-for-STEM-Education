//*************************************************************************************
/*
Project 12:Light Following Car
*/ 
#include <ESP32Servo.h>
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//photoresistors
#define light_L_Pin  34   //define the pins of the left photoresistor as gpio34
#define light_R_Pin  35   //define the pins of the right photoresistor as gpio35
int left_light; 
int right_light;

//servo
const int servoPin = 4;//set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

void setup(){
  Serial.begin(115200); //set baud rate to 115200.
  pinMode(light_L_Pin, INPUT); //set pins of the left sensor to INPUT
  pinMode(light_R_Pin, INPUT); //set pins of the right sensor to INPUT
  
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
  myservo.write(90);  // the initial angle of the servo is set to 90° .
  delay(300);
}

void loop(){
  left_light = analogRead(light_L_Pin);//Read the value of the left photoresistor
  right_light = analogRead(light_R_Pin);//Read the value of the right photoresistor
  Serial.print("left_light_value = ");
  Serial.println(left_light);
  Serial.print("right_light_value = ");
  Serial.println(right_light);
  if (left_light > 3000 && right_light > 3000) //detect ranges of left and right photoresistors
  {  
    Car_front(); //go forward
  } 
  else if (left_light > 3000 && right_light <= 3000)  //detect ranges of left and right photoresistors
  {
    Car_left(); //turn left
  } 
  else if (left_light <= 3000 && right_light > 3000) //detect ranges of left and right photoresistors
  {
    Car_right(); //turn right
  } 
  else  //
  {
    Car_Stop(); //stop
  }
}

void Car_front()
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void Car_left()
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void Car_right()
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void Car_Stop()
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); //the left motor outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); //the right motor outputs PWM 0
}
//*************************************************************************************
