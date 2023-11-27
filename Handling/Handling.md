# **Handling Robot**

## **Description：**

Among many industrial robots, handling robots are undoubtedly
effective, applied in industrial manufacturing, warehousing and
logistics, tobacco, medicine, food, chemical and other industries,
or in post offices, libraries, ports and parking lots. In this
experiment, we will use LEGO blocks to build a handling robot to
carry things.

## **How to build up a handling robot**



 Step 1
 Dismantle the ultrasonic sensor
![ 6](media/f05a58fdd61093240a78a884d2484bab.png)

------


 Required components
![6_2](media/1f8438657adee5ee0931a2e0db8c8d79.png)

------

![6_3](media/b9cb95a5c53ab96b85b41d648c19534f.png)

------

![6_4](media/502348fe825fa6e57cd61d1700c93c0f.png)

------


 Step 2
 Required components
![6_5](media/6ce5dc24243321d0d31e385997059e21.png)

------

![6_6](media/d33b93e264a8c2833ce2b3d4dcd91517.png)

------

![6_7](media/c9a151d3856720e100dabe436d62d230.png)

------


 Step 3
 Required components
![6_8](media/a2b2a96f444801e2da559161cc5b2b65.png)

------

![6_9](media/077d7de8e6260998b60e008593bff7e5.png)

------

![6_10](media/a9a493a264445b0feab48159837fe725.png)

------


 Step 4
 Required components
![6_11](media/a86c18982b0afaa1921a3b0072989a95.png)

------

![6_12](media/0f804e35e2f7dc6e2a028d21f21e392e.png)

------

![6_13](media/4a759b55f056a6cd9dfdee0cece5dfd1.png)

------


 Step 5
 Required components
![6_14](media/e99bf266cf59d343b34f2cca10de5b49.png)

------

![6_15](media/ce5e3e8e4548aba8fad60910214bcca6.png)

------

![6_16](media/9b2185eaf2f66f35b57754d5476b1ddd.png)

------


 Step 6
 Required components
![6_17](media/4dfd662862d57090e60b71b18cd3291f.png)

------

![6_18](media/7164d7dd08e97a62bc77ae08aadf1526.png)

------

![6_19](media/1cccaf2a536170c11bbc4cdf7683484a.png)

------


 Step 7
 Required components
![6_20](media/7d3e50e74ae36545217c4fa15a53d04e.png)

------

![6_21](media/7d32a51858167fd8aee486b72f287ae3.png)

------

![6_22](media/83dbaa2175018608dc84f4dda726fa96.png)

------


 Step 8
 Required components
![6_23](media/6e73265906657a00ca17c5323f65dcec.png)

------


![6_24](media/f60d276bb389be3c440b15adea292adf.png)

------

![6_25](media/86f43f7d15cfb6c4ac807423b2510de0.png)

------


 Step 9
 Required components
![6_26](media/df4b2ab9b8ad767b948de6f783a0cf42.png)

------



 Set the angle of the servo to 180 degree

|    Wire servo up Servo  |  PCB Board    |
| ---- | ---- |
|   Brown   |  G    |
|   Red   |   5V   |
|   Orange   |   S2（A0）   |

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



------

![6_27](media/014d0f844d18f7bbd2a80b7f1679fca1.png)

------

![6_28](media/e66813dd3c1884b0c1f65bdf3f5b8c48.png)

------




 Step 10

 Required components

![6_29](media/13c2436b53b5dab5f508e902bcb6b0cf.png)

------

![6_30](media/20149b66db795ce32fcb060a0823bab0.png)

------

![3](media/b97e180d74ce41e7293acfe85a0b1bd7.png)

------

![3_1](media/b1d1dd5fe42bc14bbf773e9e10cdcab9.png)

------

![6_31](media/87076fbdd533d91c88fa7ae5cd5df32e.png)

------

![6_32](media/89d2a853cf95635fae60b5ec48482d54.png)

------



 Wire up servo

![8c76722a8e1b9678784637c950ad597](media/3f637fbc0f6a056d188ef4e91c0483bd.jpeg)
<!-- -->

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
    const int servopin = 4;//定义舵机的IO脚位在gpio4.

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
        ledcWrite(channel_PWM, set_angle(130));
        }
        else if(req == "/btn/q")
        {
        Serial.write('q');
        client.println("q");
        }
        else if(req == "/btn/x")
        {
        ledcWrite(channel_PWM, set_angle(180));
        }

    }

    int set_angle(int angle)
    {
    int servo_angle = map(angle, 0, 180, 25, 128);
    return servo_angle;
    }


## **Test Code for Kidsblock：**
![](media/ks5002-3.png)

Connect Wifi, click
buttons![](media/5f365b2083f264b4ecfc5e68d07df287.png)
to make the car to move toward
building blocks and put some building blocks on the robot.

Then press ![](media/5f365b2083f264b4ecfc5e68d07df287.png)
to drive the robot to move.

Hold down the button
![](media/0e62c323c0018af1a2824a120d447bda.png)
to drive the robot to drop building
blocks, then building blocks can be conveyed
