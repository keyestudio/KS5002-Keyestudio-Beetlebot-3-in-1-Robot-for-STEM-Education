//*************************************************************************************
/*
Project 14：IR Remote Control Car
*/ 
#include <IRremote.hpp>
#include <ESP32Servo.h>

//IR reception
const uint16_t RECV_PIN = 19;  //IR reception pins
IRrecv irrecv(RECV_PIN); //initialize pins of IR receiver
decode_results results; //Create a decoded result class object

//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

//servo
const int servoPin = 4;//set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

void setup() {
  Serial.begin(115200);//open the serial port and set baud rate to 115200
  pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
  ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
  ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.

  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK); // Start receiver
  
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
  myservo.write(90);  // the initial angle of the servo is set to 90° .
  delay(300);
}

void loop() {
  if (IrReceiver.decode()) {
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);  // Print raw data
    handleControl(IrReceiver.decodedIRData.decodedRawData); //Handle commands from remote control 
    IrReceiver.resume();  // Receive the next value
  }
}

void handleControl(unsigned long irr_val){
  switch(irr_val)
  {
    case 0xB946FF00 : 
      car_front();  
      break;
    case 0xEA15FF00 : 
      car_back(); 
      break;
    case 0xBB44FF00 : 
      car_left(); 
      break; 
    case 0xBC43FF00 : 
      car_right();
      break;
    case 0xBF40FF00 : 
      car_Stop();
      break;
  }  
}

void car_front()//define the state of going forward
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void car_back()//define the state of going back
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void car_left()//define the state of turning left
{
  digitalWrite(left_ctrl,HIGH); //set direction control pins of the left motor to HIGH..
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void car_right()//define the state of turning right
{
  digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
  digitalWrite(right_ctrl,HIGH); //set control pins of the right motor to HIGH..
  ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
}
void car_Stop()//define the state of stopping
{
  digitalWrite(left_ctrl,LOW);//set direction control pins of the left motor to LOW.
  ledcWrite(left_pwm, 0); //the left motor outputs PWM 0
  digitalWrite(right_ctrl,LOW);//set control pins of the right motor to LOW.
  ledcWrite(right_pwm, 0); //the right motor outputs PWM 0
}
//*************************************************************************************
