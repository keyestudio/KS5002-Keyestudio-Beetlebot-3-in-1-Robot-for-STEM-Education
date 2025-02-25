# Soccer Robot Tutorial

## Description：

 Can you imagine that a robot can play soccer? This idea has became realistic. As we know, the RoboCup championship is generally held each year. In this part, we will create a soccer robot to play soccer.

## Install APP

**⚠️<span style="color: rgb(255, 76, 65);">Special note:</span>** If you have downloaded and installed the APP, this step is skipped; If not, please refer to the installation instructions of link: [Project 18：Read WiFi APP Button String](https://docs.keyestudio.com/projects/KS5002/en/latest/docs/Arduino_C%20Tutorial/Arduino_C_Tutorial.html#project-18-read-wifi-app-button-string) .


## How to install the soccer robot

                              
**Step 1**

 Remove two photoresistors

![3_1](media/5e64e86f88135f370916439bbabb2d5a.png)

------


 Required Parts

![Img](./media/img-20250217093727.png)

------

Install

![Img](./media/img-20250217093736.png)


------

Complete

![Img](./media/img-20250217093746.png)

------


**Step 2**

 Required Parts

![Img](./media/img-20250217093756.png)


------

Install

![Img](./media/img-20250217093803.png)


------

Complete

![Img](./media/img-20250217093809.png)


------


**Step 3**

 Required Parts

![Img](./media/img-20250217093818.png)


------

Install

![Img](./media/img-20250217093826.png)


------

Complete

![Img](./media/img-20250217093833.png)


------



**Step 4**

 Required Parts

![Img](./media/img-20250217093842.png)


------

Install

![Img](./media/img-20250217093915.png)

------

Complete

![Img](./media/img-20250217093924.png)

------



**Step 5**

 Required Parts

![Img](./media/img-20250217093935.png)


------

Install

![Img](./media/img-20250217093945.png)


------

Complete

![Img](./media/img-20250217093953.png)


------


 
**Step 6**

 Required Parts

![Img](./media/img-20250217094000.png)


------

Install

Note the installation direction of the part marked by the circle


![Img](./media/img-20250217094008.png)


------

Complete

![Img](./media/img-20250217094015.png)


------


 
**Step 7**

 Required Parts

![Img](./media/img-20250217094025.png)


------

Install

![Img](./media/img-20250217094033.png)


------

Complete

![Img](./media/img-20250217094039.png)


------


**Step 8**

 Required Parts

![Img](./media/img-20250217094047.png)


------

Install

Adjust the angle of the claw. Then make it close and face front

![Img](./media/img-20250217094057.png)


------

Complete

![Img](./media/img-20250217094104.png)


------


 
**Step 9**

 Required Parts

![Img](./media/img-20250217094112.png)


------


 Set the angle of the servo to 180 degree

| Wire Up Servo |  PCB Board  |
| :-----------: | :---------: |
|     Brown     |      G      |
|      Red      |     5V      |
|    Orange     | S2（GPIO23) |


**Method 1：Arduino code**

Upload the code of the servo to the main board of the Beetlebot car, as shown below

```C
//*************************************************************************************
#include <Arduino.h>
#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo

int servoPin = 23; // Servo motor pin

void setup() {
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object

  myservo.write(180);  // the angle of the steering gear is 180°.
  delay(1000);
  myservo.write(90);  // the angle of the steering gear is 90°.
  delay(1000);
  myservo.write(180);  // the angle of the steering gear is 180°.
  delay(1000);
}
void loop() {

}  
//*************************************************************************************
```

How to get it ?

In folder **..\Codes\Soccer_Robot_Code\270° Servo Angle initialization** , open file **270_Servo_Angle_initialization.ino** , or copy and paste the above test code into the Arduino IDE.

![Img](./media/img-20250217100047.png)

**Method 2：KidsBlock(Scratch) code**

 You can also initialize the angle of the servo through the following code

![Img](./media/img-20250217094935.png)

Open file **270°_Servo_Angle_initialization.sb3** with KidsBlock IDE, in folder **..\Codes\Soccer_Robot_Code\270° Servo Angle initialization**.

![Img](./media/img-20250217100111.png)

Install

<span style="color: rgb(255, 76, 65);">Note:</span> Keep the claw close and face front before installing the gear

![8_4](media/e7d79896568d0f97ad08aeee6a69aec1.png)

------

Complete

![8_5](media/ad193ecc917138ddb44328e10ef19654.png)

------



 **Step 10**

 Required Parts

![Img](./media/img-20250217102039.png)


------

Install

![Img](./media/img-20250217102047.png)


------

Complete

![Img](./media/img-20250217102054.png)


------



 **Step 11**

 Required Parts

![Img](./media/img-20250217102102.png)


------

Install

![Img](./media/img-20250217102109.png)


------

Complete

![Img](./media/img-20250217102119.png)


------

![Img](./media/img-20250217102128.png)


------



 **Wiring Diagram**

 Wire up the LEGO servo

![Img](./media/img-20250217103548.png)


## Install a soccer goal

 **Step 1**                                                                 
 
 Required Parts

![2](media/0fc16ff134aa3503319d4101362338d8.png)

------

Install

![2_1](media/1bd86df44aba070fea465a1da26df9e9.png)

------

Complete

![2_2](media/f3749804b3ac033cfdd7b4423ddea660.png)

------

​                               

 **Step 2**

Required Parts

![2_3](media/8d3f4c81812931c8cb3140c5fc33aa1a.png)

------

Install

![2_4](media/dcc81f3f50258615595745676921b34c.png)

------

Complete

![2_5](media/567e873c86303e9e7ef0f6c919ae8fac.png)

------



 **Step 3**

Required Parts

![2_6](media/99d485c0ce81fe195bd9d4282403b8f1.png)

------

Install

![2_7](media/5d749f5431468ffc7be947dfafd68223.png)

------

Complete

![2_8](media/89031df8ec6afe07c8e58fe26a2974c4.png)

------

Then the soccer goal is installed well.


## Test Code for Arduino

**⚠️ATTENTION:** Before uploading code, please replace the WiFi name(**REPLACE_WITH_YOUR_SSID**) in the code and the passwords(**REPLACE_WITH_YOUR_PASSWORD**) into yours.

```C
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiClient.h>

#include <ESP32Servo.h>
//motor
#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

/*REPLACE WITH YOUR NETWORK CREDENTIALS(Put your SSID & Password)*/
const char* ssid = "REPLACE_WITH_YOUR_SSID"; //Enter SSID here
const char* password = "REPLACE_WITH_YOUR_PASSWORD"; //Enter Password here
// TCP server at port 80 will respond to HTTP requests
WiFiServer server(80);

//servo
const int servoPin = 23;//set the pin of the servo to gpio23.
Servo myservo;  // create servo object to control a servo

void setup(void)
{
    Serial.begin(115200);
    pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
    ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
    pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
    ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
  
    myservo.setPeriodHertz(50);           // standard 50 hz servo
    myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
    myservo.write(180);  // the initial angle of the servo is set to 180° .
    delay(300);

    // Connect to WiFi network
    WiFi.begin(ssid, password);
    Serial.println("");

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    // Set up mDNS responder:
    // - first argument is the domain name, in this example
    //   the fully-qualified domain name is "esp32.local"
    // - second argument is the IP address to advertise
    //   we send our IP address on the WiFi network
    if (!MDNS.begin("esp32")) {
        Serial.println("Error setting up MDNS responder!");
        while(1) {
            delay(1000);
        }
    }
    Serial.println("mDNS responder started");

    // Start TCP (HTTP) server
    server.begin();
    Serial.println("TCP server started");

    // Add service to MDNS-SD
    MDNS.addService("http", "tcp", 80);
}

void loop(void)
{
    // Check if a client has connected
    WiFiClient client = server.available();
    if (!client) {
        return;
    }
    //Serial.println("");
    //Serial.println("New client");

    // Wait for data from client to become available
    while(client.connected() && !client.available()){
        delay(1);
    }

    // Read the first line of HTTP request
    String req = client.readStringUntil('\r');
    //Serial.println(req);
    // First line of HTTP request looks like "GET /path HTTP/1.1"
    // Retrieve the "/path" part by finding the spaces
    int addr_start = req.indexOf(' ');
    int addr_end = req.indexOf(' ', addr_start + 1);
    if (addr_start == -1 || addr_end == -1) {
        //Serial.print("Invalid request: ");
        //Serial.println(req);
        return;
    }
    req = req.substring(addr_start + 1, addr_end);
    //Serial.print("Request: ");
    Serial.println(req);
    String s;
    if (req == "/")
    {
        IPAddress ip = WiFi.localIP();
        String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
        s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>Hello from ESP32 at ";
        s += ipStr;
        s += "</html>\r\n\r\n";
        Serial.println("Sending 200");
        client.println(WiFi.localIP());
    }
    else if(req == "/btn/F")
    {
      digitalWrite(left_ctrl,LOW); //set direction control pins of the left motor to LOW.
      ledcWrite(left_pwm, 150); //the left motor outputs PWM 150
      digitalWrite(right_ctrl,LOW); //set control pins of the right motor to LOW.
      ledcWrite(right_pwm, 150); //the right motor outputs PWM 150
    }
    else if(req == "/btn/B")
    {
      digitalWrite(left_ctrl, HIGH);
      ledcWrite(left_pwm, 150);
      digitalWrite(right_ctrl, HIGH);
      ledcWrite(right_pwm, 150);
    }
    else if(req == "/btn/L")
    {
      digitalWrite(left_ctrl,HIGH); 
      ledcWrite(left_pwm, 150); 
      digitalWrite(right_ctrl,LOW); 
      ledcWrite(right_pwm, 150); 
    }
    else if(req == "/btn/R")
    {
      digitalWrite(left_ctrl,LOW); 
      ledcWrite(left_pwm, 150); 
      digitalWrite(right_ctrl,HIGH); 
      ledcWrite(right_pwm, 150); 
    }
    else if(req == "/btn/S")
    {
      digitalWrite(left_ctrl,LOW);
      ledcWrite(left_pwm, 0);
      digitalWrite(right_ctrl,LOW);
      ledcWrite(right_pwm, 0); 
    }
    else if(req == "/btn/p")
    {
      Serial.write('p');
      myservo.write(180);
      delay(200);
    }
    else if(req == "/btn/q")
    {
      Serial.write('q');
      client.println("q");
    }
    else if(req == "/btn/x")
    {
      myservo.write(160);
      delay(200);
    }
}
```

## Test Code for Kidsblock

![Img](./media/img-20250217103444.png)

Build up the soccer goal with building blocks and place it at fixed location, connect the robot car through Wifi.

Put a small soccer in the middle of the claw of the robot car, press and hold down the button ![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png) to enable the claw to hold the soccer, then press buttons ![](media/5f365b2083f264b4ecfc5e68d07df287.png) to adjust the car’s movement direction , so as to put the soccer close to the soccer goal. At last, release the button ![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png) to allow the soccer to drop on the floor and roll to the soccer goal. If not, repeat the above step to shoot the goal.

If your friend owns this kind of soccer robot, you guys can hold a soccer match. It sounds amazing, right?.
