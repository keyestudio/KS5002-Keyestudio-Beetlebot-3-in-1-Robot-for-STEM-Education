//*************************************************************************************
/*
 Project 05 Motor drive and speed regulation
 Motor moves forward, backward, left and right
*/ 
#define left_ctrl  33  //define the direction control pin(rgpio33) of the left motor
#define left_pwm  26   //define PWM control pins of the left motor as gpio25
#define right_ctrl  32 //Define the direction control pin of the  right motor as gpio32
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

void setup()
{
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
}

void loop()
{ 
  //front
  digitalWrite(left_ctrl,LOW); // set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 200); // the left motor outputs PWM 200
  digitalWrite(right_ctrl,LOW); // set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 200); // the right motor outputs PWM 200
  delay(2000);//delay in 2s
  
  //back
  digitalWrite(left_ctrl,HIGH); // set direction control pins of the left motor to HIGH.
  ledcWrite(left_pwm, 55); // the left motor outputs PWM 55
  digitalWrite(right_ctrl,HIGH); // set control pins of the right motor to HIGH.
  ledcWrite(right_pwm, 55); // the right motor  outputs PWM 55
  delay(2000);//delay in 2s
  
  //left
  digitalWrite(left_ctrl,HIGH); // set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 55); // the left motor outputs PWM 55.
  digitalWrite(right_ctrl,LOW); // set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 200); // the right motor outputs PWM 200.
  delay(2000);//delay in 2s
  
  //right
  digitalWrite(left_ctrl,LOW); // set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 200); // the left motor outputs PWM 200.
  digitalWrite(right_ctrl,HIGH); // set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 55); // the right motor outputs PWM 55
  delay(2000);//delay in 2s
  
  //stop
  digitalWrite(left_ctrl,LOW);// set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); // the left motor outputs PWM 0.
  digitalWrite(right_ctrl,LOW);// set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); // the right motor outputs PWM 0
  delay(2000);//delay in 2s
}
//*************************************************************************************
