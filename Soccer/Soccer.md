# Soccer Robot

## **Description：**

 Can you imagine that a robot can play soccer? This idea has became
realistic. As we know, the RoboCup championship is generally held
each year. In this part, we will create a soccer robot to play
soccer.

## **How to install the soccer robot**

                              
 Step 1
 Remove two photoresistors

![3_1](media/5e64e86f88135f370916439bbabb2d5a.png)

------


 Required Parts
![3_3](media/52bddcd05b409305adfbb39a9af55ee6.png)

------

![3_4](media/9b295f5c6b71340264eb54fd701296d6.png)

------

![3_5](media/448e4708895f49afd985391c8ac0cd04.png)

------


 Step 2
 Required Parts
![5](media/b7ca00b9d07fc08780f5e6e39595d974.png)

------

![5_1](media/d124cb9095a9cecb1eea4c9b565da3dd.png)

------

![5_2](media/ef1331144242e5bc24bc426842d98573.png)

------


 Step 3
 Required Parts
![6](media/2520ee435d034c60b66058e4bacfadb6.png)

------

![6_1](media/1d88fd0c5f6b4aff89c3900b3df5533d.png)

------

![6_2](media/d05ab09c6662e3fb4d62be4f355a91be.png)

------



 Step 4
 Required Parts
![7](media/82c5dd6fbe0818dbdbaf33ee0b019215.png)

------

![7_1](media/5964ab1fd800a0522923960dd32be299.png)

------

![7_2](media/29abea2f58433515043942fd37af34e7.png)

------



 Step 5
 Required Parts
![7_3](media/91e35080c03e1ca03b2a58b71da76e43.png)

------

![7_4](media/a643659079fdbf1433bb40658a590675.png)

------

![7_5](media/9ec78ee08c51b297ccaa34b13fa8ae8d.png)

------


 Step 6
 Required Parts
![7_6](media/d3ae331c69d05147a98b9d8353496a9f.png)

------

Note the installation direction of the part marked by the red circle
![7_7](media/77092cee1e554dc3b259b2a1ef7f6e4e.png)

------

![7_8](media/f939d187c78455662d9c3fd3bc77d8b7.png)

------


 Step 7
 Required Parts
![7_9](media/f2a0fea032c9ca807196bae481054b82.png)

------

![7_10](media/e9fb139ce5954ee5d0cc32028b15d1a4.png)

------

![7_11](media/dc849d125d6cf7748725d369ca39b6f2.png)

------


 Step 8
 Required Parts
![8](media/f45d4a0edb9caf49703f6a14061d3356.png)

------

Adjust the angle of the claw. Then make it close and face front
![8_1](media/d65a5580f2fc3292ad22005e1b480a3c.png)

------

![8_2](media/54d2787ec549a6d651753475ca760f6b.png)

------


 Step 9
 Required Parts
![8_3](media/f410d612e4ea08f789b5f8c2fe625947.png)

------


 Set the angle of the servo to 180 degree

| Wire Up Servo |  PCB Board  |
| :-----------: | :---------: |
|     Brown     |      G      |
|      Red      |     5V      |
|    Orange     | S2（GPIO23) |


Upload the code of the servo to the main board of the Beetlebot car, as shown below

    //*************************************************************************************
    #include <Arduino.h>

    int channel_PWM = 4;  
    int freq_PWM = 50;   
    int resolution_PWM = 10;   
    const int PWM_Pin = 23;  

    void setup() {
    ledcSetup(channel_PWM, freq_PWM, resolution_PWM); 
    ledcAttachPin(PWM_Pin, channel_PWM);  
    }

    void loop() {
    ledcWrite(channel_PWM, 128);  
    }
    //*************************************************************************************


You can also initialize the angle of the servo through the following code

![](media/00f77a1d94aaae5bc1b8b68e6bc6fa60.png)



Keep the claw close and face front before installing the gear

![8_4](media/e7d79896568d0f97ad08aeee6a69aec1.png)

------

![8_5](media/ad193ecc917138ddb44328e10ef19654.png)

------



 Step 10

 Required Parts

![3_6](media/90986cacd92570cdd76b437df5e1b916.png)

------

![3_7](media/228346c56280be9b2516abd39c9fa7c7.png)

------

![3_8](media/3b9a3a2fce95bcf48fc833aed69fe4b6.png)

------



 Step 11

 Required Parts

![3_9](media/68d76c258157e550ea345fecc3d97342.png)

------

![3_10](media/31805e285ab9d3c8b487fe769c97574b.png)

------

![3_11](media/4a59747ea4ecc8e8eb328935007684b4.png)

------

![3_12](media/40ced3c517b76bdca41bb867388291cc.png)

------



 Wiring Diagram

 Wire up the LEGO servo

![IMG_256](media/4a7b89134d7aa5897733fa0ab411872c.jpeg)


 ## Install a soccer goal

 Step 1                                                                 
 Required Parts

![2](media/0fc16ff134aa3503319d4101362338d8.png)

------

![2_1](media/1bd86df44aba070fea465a1da26df9e9.png)

------

![2_2](media/f3749804b3ac033cfdd7b4423ddea660.png)

------

​                               

 Step 2

Required Parts
![2_3](media/8d3f4c81812931c8cb3140c5fc33aa1a.png)

------

![2_4](media/dcc81f3f50258615595745676921b34c.png)

------

![2_5](media/567e873c86303e9e7ef0f6c919ae8fac.png)

------



 Step 3
Required Parts
![2_6](media/99d485c0ce81fe195bd9d4282403b8f1.png)

------

![2_7](media/5d749f5431468ffc7be947dfafd68223.png)

------

![2_8](media/89031df8ec6afe07c8e58fe26a2974c4.png)

------

Then the soccer goal is installed well.


##  **Test Code for Arduino：**

    #include <WiFi.h>
    #include <ESPmDNS.h>
    #include <WiFiClient.h>

    #define INA 32
    #define PWMA 25
    #define INB 33
    #define PWMB 26

    const char* ssid = "ChinaNet-2.4G-0DF0";
    const char* password = "ChinaNet@233";
    // TCP server at port 80 will respond to HTTP requests
    WiFiServer server(80);
    int channel_PWM = 3; 
    int freq_PWM = 50;
    int resolution_PWM = 10;
    const int servopin = 4;
    void setup(void)
    {
        Serial.begin(115200);
        pinMode(INA, OUTPUT);
        ledcAttachPin(PWMA, 0);
        ledcSetup(0, 50, 8);
        pinMode(INB, OUTPUT);
        ledcAttachPin(PWMB,1);
        ledcSetup(1, 50, 8);
        ledcSetup(3, 50, 10); 
        ledcAttachPin(23, 3); 
        ledcWrite(channel_PWM, set_angle(180));
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
        digitalWrite(INA, LOW);
        ledcWrite(0, 110);
        digitalWrite(INB, LOW);
        ledcWrite(1, 100);
        }
        else if(req == "/btn/B")
        {
        digitalWrite(INA, HIGH);
        ledcWrite(0, 155);
        digitalWrite(INB, HIGH);
        ledcWrite(1, 155);
        }
        else if(req == "/btn/L")
        {
        digitalWrite(INA, LOW);
        ledcWrite(0, 100);
        digitalWrite(INB, HIGH);
        ledcWrite(1, 155);
        }
        else if(req == "/btn/R")
        {
        digitalWrite(INA, HIGH);
        ledcWrite(0, 155);
        digitalWrite(INB, LOW);
        ledcWrite(1, 100);
        }
        else if(req == "/btn/S")
        {
        digitalWrite(INA, LOW);
        ledcWrite(0, 0);
        digitalWrite(INB, LOW);
        ledcWrite(1, 0);
        }
        else if(req == "/btn/p")
        {
        Serial.write('p');
        ledcWrite(channel_PWM, set_angle(180));
        }
        else if(req == "/btn/q")
        {
        Serial.write('q');
        client.println("q");
        }
        else if(req == "/btn/x")
        {
        ledcWrite(channel_PWM, set_angle(160));
        }

    }

    int set_angle(int angle)
    {
    int servo_angle = map(angle, 0, 180, 25, 128);
    return servo_angle;
    }


##  **Test Code for Kidsblock：**

![](media/ks5002-1.png)

Build up the soccer goal with building blocks and place it at fixed
location, connect the robot car through Wifi.

Put a small soccer in the middle of the claw of the robot car, press
and hold down the button
![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png)
to enable the claw to hold the soccer,
then press buttons
![](media/5f365b2083f264b4ecfc5e68d07df287.png)
to adjust the car’s movement direction
so as to put the soccer close to the soccer goal. At last, release
the button ![](media/c6d6fb5f7473c0aabcdeddb580b740ed.png)
to allow the soccer to drop on the
floor and roll to the soccer goal. If not, repeat the above step to
shoot the goal.

If your friend owns this kind of soccer robot, you guys can hold a
soccer match. It sounds amazing, right?.
