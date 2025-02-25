//*************************************************************************************
/*
Project 10: Line Tracking
*/
#include <ESP32Servo.h>
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26
#define right_ctrl  32 //define direction control pins of the right motor as gpio32
#define right_pwm  25  //define the PWM control pin of the right motor as gpio25

//IR line tracking 
#define tracking_left  17  //set the pin of the left line tracking sensor to gpio17
#define tracking_right  16  //set the pin of the right line tracking sensor to gpio16
int L_val,R_val;//Define two variables

//servo
const int servoPin = 4;//set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

void setup() {
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
  pinMode(tracking_left, INPUT); //Set right pins of the left sensor to input
  pinMode(tracking_right, INPUT); //Set right pins of the right sensor to input
 
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
  myservo.write(90);  // the initial angle of the servo is set to 90° .
  delay(300);
}

void loop() 
{
  tracking(); //run main programs
}

void tracking()
{
  L_val = digitalRead(tracking_left);//read the value of the left line tracking sensor
  R_val = digitalRead(tracking_right);//read the value of the right line tracking sensor
  if((L_val == 1)&&(R_val == 1))//if both of sensors detect black lines
  {
    front();//go forward
  }
  else if((L_val == 1)&&(R_val == 0))//if only the left sensor detects black lines
  {
    left();//turn left
  }
  else if((L_val == 0)&&(R_val == 1))//if only the right sensor detects black lines
  {
    right();//turn right
  }
  else//if none of sensors detects black lines
  {
    Stop();//stop
   }
}

void front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 130); //the left motor outputs PWM 130
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 130); //the right motor outputs PWM 130
}
void left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 135); //the left motor outputs PWM 135
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 80); //the right motor outputs PWM 80
}
void right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 80); //the left motor outputs PWM 80
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 135); //the right motor outputs PWM 135
}
void Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); //the left motor outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); //the right motor outputs PWM 0
}
//*************************************************************************************
