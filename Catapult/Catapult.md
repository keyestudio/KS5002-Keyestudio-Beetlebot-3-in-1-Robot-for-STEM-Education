# **Catapult**

##  **Description：**

A catapult is a ballistic device used to launch a projectile a great
distance without the aid of gunpowder or other propellants –
particularly various types of ancient and medieval siege engines.
... We will make a catapult with LEGO building blocks. Equipped with
servos and gears, the car has LEGO tower used to carry projectiles.

As the servo rotates to a proper angle then push the long arm
backward a projectile will be launched.

##  **How to build up a catapult**


 Step 1
 Required components
![3](media/ef12c46a8dc6e5f5c7f7ee6fc3c3dc55.png)

------

![3_1](media/85116f87b7e67a5ab0de47507da771aa.png)

------

![3_2](media/bb5d2d9bc07a9cfdc997f798c6c56eca.png)

------


 Step 2
 Required components
![3_3](media/d827f9196a2aed7686c9d767e64b7f66.png)

------

![3_4](media/7e4fed5d035aac6b58ee79afd3aca1a1.png)

------

![3_5](media/088c8c481e0b48b3625f465a4ceed269.png)

------


 Step 3
 Required components
![3_6](media/52da40da0bbeae39083c81a57c1117e6.png)

------

![3_7](media/42004639ab3aaca47c5121bf7ac18a2d.png)

------

![3_8](media/08f91fa357f53479f8a121bd2b6d8883.png)

------


 Step 4
 Required components
![3_9](media/1678f2dcaaed186ba12fbcbc9a6d34c2.png)

------

![3_10](media/8b54d0c59f13bbbc54fafefec90bbb24.png)

------

![3_11](media/b2900c9594fb64b10ee734e2a533cfbf.png)

------


 Step 5
 Required components
![3_12](media/9975825da874d5431f9e672ca9a4479e.png)

------

![3_13](media/5c41a82613abc2c43016fb25edc5c68c.png)

------

![3_14](media/08ebb224d83a88b37ebd8b5cb80bb3ad.png)

------


 Step 6
 Required components
![3_15](media/9c247eddce7a872899c34e013e12db31.png)

------

![3_16](media/3a2946b85862bf346ffab23458553bb3.png)

------

![3_17](media/531619d92526f175188479be5fe9c403.png)

------


 Step 7
 Required components
![3_18](media/76541a6311535fd572743b0ad47f1254.png)

------

![3_19](media/a75726411d9f0bcccda1600a3f3b3cdc.png)

------

![3_20](media/216440c8133bb1fa5f9670d084815ee6.png)

------



 Step 8
 Required components
![3_21](media/7e7a7032c111bbfc5e4a6605abb84dd7.png)

------

![3_22](media/b933ff3a1efee59f590e3d511c1d2864.png)

------

![3_23](media/be75847ab4f10c2750868daf02cad97d.png)

------


 Step 9
 Required components
![4](media/8a0a23b5a1a7a332209e87d032815609.png)

------

![4_1](media/5887d93dd221b4c3aeb7dcfe2a466846.png)

------

![4_2](media/dae339a4baed35100a3580384bf228db.png)

------


 Step 10
 Required components
![4_3](media/a376478c51daef7b169d65b91257cff1.png)

------

![4_4](media/ea08ecc209960e32eee4c930201c6112.png)

------

![4_5](media/03394d1ec20bdfec33c01fcbaca3272a.png)

------


 Step 11
 Required components
![4_6](media/ccbf96f8a832f1b7429dd84c5d4345c8.png)

------

![4_7](media/e4eeea6acd26fc704b516a4eed86d280.png)

------

![4_8](media/275b434c0be9b0b29b0414c86f8016dd.png)

------


 Step 12
 Required components
![4_9](media/b7dcfd9502c3fd7b10667b6c8e02d9c2.png)

------

![4_10](media/0805a74bbabfd014c772223f269034e6.png)

------

![4_11](media/997424695d7920037017741fdbba2fac.png)

------


 Step 13
 Required components
![4_12](media/6348991aedca79b2dd8d672bf92a11d5.png)

------

![4_13](media/a6b15b1c9cf2b4c57eb99613f3b101c4.png)

------

![4_14](media/dc88133e92982bd31fecefee7ad8a7c1.png)

------


 Step 14
 Required components
![4_15](media/4647a2f97a30479a02a9166625ff8691.png)

------

![4_16](media/cca8268d5c1cea871a6724f38440bf44.png)

------

![4_17](media/ff899bedee462220afed7d6b57e5c4fb.png)

------


 Step 15
 Required components
![4_18](media/2ff9dd7a9593ae1d87ee1ef78f5ec79c.png)

------

![4_19](media/2c0b652b42d4695eaeaf57802f7d0ab7.png)

------

![4_20](media/7e28f9049c1d8081f7bb24b07c75471f.png)

------


 Step 16
 Required components
![4_21](media/f62f9d4b93b1b0ac66738baa034e710d.png)

------

![4_22](media/3f1f8d3bfd3dd6c810d55ffceefe6ca3.png)

------

![4_23](media/857bff0ba903623bc8d3a44d6410d828.png)

------


 Step 17
 Required components
![4_24](media/4d37a7993b087fe97734443ddb940941.png)

------


 Set the angle of the servo to 180 degree

| Wire servo up Servo | PCB Board |
| :--: | :--: |
|  Brown | G                 |
| Red | 5V  |
| Orange| S2（GPIO23）|

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

![](media/058b30d50392dbafa6b7bda5d47f2d25.png)



------

![4_25](media/9f5a242786bc3789adf9cf5e18b8ba51.png)

------

![4_26](media/ac803fd31a550ed4dd380b0684019011.png)

------



 Step 18

 Required components

![4_27](media/b3f95a18ac4bc0caa38a2247766520cf.png)

------

![4_28](media/9cce844758b800937ca64b05aff685d8.png)

------

![4_29](media/35a51fcf6c258efb5b657d54bb3de756.png)

------



 Wire up

 Interface the servo

![1ce70f3a2988e646798cadfc6fc8995](media/89fd41d160d778d0a7ef66c90fd28889.jpeg)


## **Test Code for Arduino：**

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
    const int servopin = 4;//

    void setup(void)
    {
        Serial.begin(115200);
        pinMode(INA, OUTPUT);
        ledcAttachPin(PWMA, 0);
        ledcSetup(0, 50, 8);
        pinMode(INB, OUTPUT);
        ledcAttachPin(PWMB,1);
        ledcSetup(1, 50, 8);//
        
        ledcSetup(3, 50, 10); 
        ledcAttachPin(23, 3); 
        ledcWrite(channel_PWM, set_angle(0));
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
        ledcWrite(0, 100);
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
        ledcWrite(channel_PWM, set_angle(55));
        }
        else if(req == "/btn/q")
        {
        Serial.write('q');
        client.println("q");
        }
        else if(req == "/btn/x")
        {
        ledcWrite(channel_PWM, set_angle(0));
        }

    }

    int set_angle(int angle)
    {
    int servo_angle = map(angle, 0, 180, 25, 128);
    return servo_angle;
    }



## **Test Code for Kidsblock：**

![](media/ks5002-2.png)

Build up a few target objects with building blocks(object A, B, C,
D, E) and keep them in a certain distance away the catapult and
connect Wifi.

Click ![](media/5f365b2083f264b4ecfc5e68d07df287.png)
to make the car to face the object A,
hold down the button
![](media/0e62c323c0018af1a2824a120d447bda.png)
to drive the catapult to launch a
building block.

Then release the button
![](media/0e62c323c0018af1a2824a120d447bda.png)
to make the long arm return to the
original state. Next, let’s check if the object A is hit by the
launched block

You can repeat above steps to hit the object B, C and D
