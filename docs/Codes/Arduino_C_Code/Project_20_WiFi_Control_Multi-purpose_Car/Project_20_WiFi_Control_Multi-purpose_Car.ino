#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiClient.h>
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel ledStrip(4, 14, NEO_GRB + NEO_KHZ800);
#include <ESP32Servo.h>

#include <HT16K33_Lib_For_ESP32.h>
//define pins as GPIO21 and GPIO22
#define SDA 21
#define SCL 22
ESP32_HT16K33 matrix = ESP32_HT16K33();
//Array, used to store pattern data, which can be calculated by yourself or obtained from the touch tool
uint8_t matrix_smile[8]={0x60, 0x80, 0x64, 0x02, 0x02, 0x64, 0x80, 0x60};
uint8_t matrix_front[8]={0x12, 0x24, 0x48, 0x90, 0x90, 0x48, 0x24, 0x12};
uint8_t matrix_back[8]={0x48, 0x24, 0x12, 0x09, 0x09, 0x12, 0x24, 0x48};
uint8_t matrix_left[8]={0x18, 0x24, 0x42, 0x99, 0x24, 0x42, 0x81, 0x00};
uint8_t matrix_right[8]={0x00, 0x81, 0x42, 0x24, 0x99, 0x42, 0x24, 0x18};
uint8_t matrix_stop[8]={0x00, 0x00, 0x00, 0xfd, 0xfd, 0x00, 0x00, 0x00};
uint8_t matrix_tsundere[8]={0x40, 0x40, 0x48, 0x10, 0x48, 0x44, 0x40, 0x00};
uint8_t matrix_squinting[8]={0x44, 0x28, 0x12, 0x02, 0x02, 0x12, 0x28, 0x44};
uint8_t matrix_despise1[8]={0x30, 0x10, 0x14, 0x04, 0x34, 0x10, 0x10, 0x00};
uint8_t matrix_speechless[8]={0x40, 0x40, 0x5c, 0x14, 0x5c, 0x40, 0x40, 0x40};
uint8_t matrix_heart[8]={0x30, 0x48, 0x44, 0x22, 0x22, 0x44, 0x48, 0x30};
uint8_t matrix_clear[8]={0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const int buzzerPin = 2; //buzzer pin

#define left_ctrl  33  //define direction control pins of the left motor as gpio33
#define left_pwm  26   //define PWM control pins of the left motor as gpio26.
#define right_ctrl  32 //define direction control pins of the right motor as gpio32.
#define right_pwm  25  //define PWM control pins of the right motor as gpio25

/*REPLACE WITH YOUR NETWORK CREDENTIALS(Put your SSID & Password)*/
const char* ssid = "REPLACE_WITH_YOUR_SSID"; //Enter SSID here
const char* password = "REPLACE_WITH_YOUR_PASSWORD"; //Enter Password here

// TCP server at port 80 will respond to HTTP requests
WiFiServer server(80);

//ultrasonic sensor
#define TRIG_PIN 5 // Define the signal input of the ultrasonic sensor as gpio5
#define ECHO_PIN 18 //Define the signal input of the ultrasonic sensor as gpio18
long distance; //define three distance variables

//servo
const int servoPin = 4;//set the pin of the servo to gpio4.
Servo myservo;  // create servo object to control a servo

int flag_neo = 0;
int flag_matrix = 0;
int speed_L = 200;
int speed_R = 200;

void setup(void)
{
    Serial.begin(115200);
    pinMode(left_ctrl,OUTPUT); //set control pins of the left motor to OUTPUT
    ledcAttach(left_pwm, 1200, 8); //Set the frequency of left_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.
    pinMode(right_ctrl,OUTPUT);//set direction control pins of the right motor to OUTPUT..
    ledcAttach(right_pwm, 1200, 8); //Set the frequency of right_pwm pin to 1200, PWM resolution to 8 that duty cycle is 256.

    pinMode(TRIG_PIN,OUTPUT);//Set TRIG_PIN to OUTPUT.
    pinMode(ECHO_PIN,INPUT);//Set ECHO_PIN to INPUT入.
    
    myservo.setPeriodHertz(50);           // standard 50 hz servo
    myservo.attach(servoPin, 500, 2500);  // attaches the servo on servoPin to the servo object.
    myservo.write(90);  // the initial angle of the servo is set to 90° .
    delay(300);

    ledcAttach(buzzerPin, 2000, 8); // Set up the PWM pin
    ledcWriteTone(buzzerPin, 0);
    
    matrix.init(0x70, SDA, SCL);// matrix init
    matrix.clear(); //clear
    matrix.setBrightness(10);

    ledStrip.begin();

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
    int len_val = String(req).length();
    String M_req = String(req).substring(0,6);
    //Serial.println(M_req);
    if(M_req == "/btn/u")
    {
      String s_M_req = String(req).substring(6,len_val);
      speed_L = s_M_req.toInt();
      Serial.println(speed_L);
    }
    if(M_req == "/btn/v")
    {
      String s_M_req = String(req).substring(6,len_val);
      speed_R = s_M_req.toInt();
      Serial.println(speed_R);
    }

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
      digitalWrite(left_ctrl,LOW);
      ledcWrite(left_pwm, speed_L);
      digitalWrite(right_ctrl,LOW);
      ledcWrite(right_pwm, speed_R);
    }
    else if(req == "/btn/B")
    {
      digitalWrite(left_ctrl, HIGH);
      ledcWrite(left_pwm, (255-speed_L));
      digitalWrite(right_ctrl, HIGH);
      ledcWrite(right_pwm, (255-speed_R));
    }
    else if(req == "/btn/L")
    {
      digitalWrite(left_ctrl, HIGH);
      ledcWrite(left_pwm, speed_L);
      digitalWrite(right_ctrl, LOW);
      ledcWrite(right_pwm, (255-speed_R));
    }
    else if(req == "/btn/R")
    {
      digitalWrite(left_ctrl, LOW);
      ledcWrite(left_pwm, (255-speed_L));
      digitalWrite(right_ctrl, HIGH);
      ledcWrite(right_pwm, speed_R);
    }
    else if(req == "/btn/S")
    {
      digitalWrite(left_ctrl, LOW);
      ledcWrite(left_pwm, 0);
      digitalWrite(right_ctrl, LOW);
      ledcWrite(right_pwm, 0);
    }
    else if(req == "/btn/a")
    {
      ledcWriteTone(buzzerPin, 262);
    }
    else if(req == "/btn/b")
    {
      ledcWriteTone(buzzerPin, 0);
    }
    else if(req == "/btn/c")
    {
      ledcWriteTone(buzzerPin, 262);
      delay(200);
      ledcWriteTone(buzzerPin, 294);
      delay(200);
      ledcWriteTone(buzzerPin, 330);
      delay(200);
      ledcWriteTone(buzzerPin, 349);
      delay(200);
      ledcWriteTone(buzzerPin, 392);
      delay(200);
      ledcWriteTone(buzzerPin, 440);
      delay(200);
      ledcWriteTone(buzzerPin, 494);
      delay(200);
    }
    else if(req == "/btn/d")
    {
      ledcWriteTone(buzzerPin, 0);
    }
    else if(req == "/btn/e")
    {
      flag_neo = flag_neo + 1;
      if(flag_neo >= 7)
      {
        flag_neo = 7;
      }
      Serial.println(flag_neo);
      switch(flag_neo)
      {
        case 1: ledStrip.fill(0xff0000, 0, 3);ledStrip.show(); break;
        case 2: ledStrip.fill(0xe6da59, 0, 3);ledStrip.show(); break;
        case 3: ledStrip.fill(0x4cff00, 0, 3);ledStrip.show(); break;
        case 4: ledStrip.fill(0x0077ff, 0, 3);ledStrip.show(); break;
        case 5: ledStrip.fill(0xff10df, 0, 3);ledStrip.show(); break;
        case 6: ledStrip.fill(0x75ffff, 0, 3);ledStrip.show(); break;
        case 7: ledStrip.fill(0xffffff, 0, 3);ledStrip.show(); break;
      }
    }
    else if(req == "/btn/f")
    {
      ledStrip.clear();
      ledStrip.show();
    }
    else if(req == "/btn/g")
    {
      flag_neo = flag_neo - 1;
      Serial.println(flag_neo);
      if(flag_neo <= 1)
      {
        flag_neo = 1;
      }
      switch(flag_neo)
      {
        case 1: ledStrip.fill(0xff0000, 0, 3);ledStrip.show(); break;
        case 2: ledStrip.fill(0xe6da59, 0, 3);ledStrip.show(); break;
        case 3: ledStrip.fill(0x4cff00, 0, 3);ledStrip.show(); break;
        case 4: ledStrip.fill(0x0077ff, 0, 3);ledStrip.show(); break;
        case 5: ledStrip.fill(0xff10df, 0, 3);ledStrip.show(); break;
        case 6: ledStrip.fill(0x75ffff, 0, 3);ledStrip.show(); break;
        case 7: ledStrip.fill(0xffffff, 0, 3);ledStrip.show(); break;
      }
    }
    else if(req == "/btn/z")
    {
      ledStrip.clear();
    }
//    else if(req == "/btn/h")
//    {
//      Serial.write('z');
//      client.println(F("h"));
//    }
    else if(req == "/btn/i")
    {
      flag_matrix = flag_matrix + 1;
      if(flag_matrix >= 10)
      {
        flag_matrix = 10;
      }
      Serial.println(flag_matrix);
      switch(flag_matrix)
      {
        case 1: matrix.showLedMatrix(matrix_smile,0,0);matrix.show(); break;
        case 2: matrix.showLedMatrix(matrix_tsundere,0,0);matrix.show(); break;
        case 3: matrix.showLedMatrix(matrix_squinting,0,0);matrix.show(); break;
        case 4: matrix.showLedMatrix(matrix_despise1,0,0);matrix.show(); break;
        case 5: matrix.showLedMatrix(matrix_speechless,0,0);matrix.show(); break;
        case 6: matrix.showLedMatrix(matrix_heart,0,0);matrix.show(); break;
        case 7: matrix.showLedMatrix(matrix_front,0,0);matrix.show(); break;
        case 8: matrix.showLedMatrix(matrix_back,0,0);matrix.show(); break;
        case 9: matrix.showLedMatrix(matrix_left,0,0);matrix.show(); break;
        case 10: matrix.showLedMatrix(matrix_right,0,0);matrix.show(); break;
      }
    }
    else if(req == "/btn/j")
    {
      matrix.clear();
      matrix.show();//Go forward 
    }
    else if(req == "/btn/k")
    {
      flag_matrix = flag_matrix - 1;
      if(flag_matrix <= 1)
      {
        flag_matrix = 1;
      }
      Serial.println(flag_matrix);
      switch(flag_matrix)
      {
        case 1: matrix.showLedMatrix(matrix_smile,0,0);matrix.show(); break;
        case 2: matrix.showLedMatrix(matrix_tsundere,0,0);matrix.show(); break;
        case 3: matrix.showLedMatrix(matrix_squinting,0,0);matrix.show(); break;
        case 4: matrix.showLedMatrix(matrix_despise1,0,0);matrix.show(); break;
        case 5: matrix.showLedMatrix(matrix_speechless,0,0);matrix.show(); break;
        case 6: matrix.showLedMatrix(matrix_heart,0,0);matrix.show(); break;
        case 7: matrix.showLedMatrix(matrix_front,0,0);matrix.show(); break;
        case 8: matrix.showLedMatrix(matrix_back,0,0);matrix.show(); break;
        case 9: matrix.showLedMatrix(matrix_left,0,0);matrix.show(); break;
        case 10: matrix.showLedMatrix(matrix_right,0,0);matrix.show(); break;
      }
    }
    else if(req == "/btn/y")
    {
      Serial.write('y');
      client.println(F("y"));
    }
    else if(req == "/btn/l")
    {
      Serial.write('l');
      client.println(F("l"));
      //car_follow();
    }
    else if(req == "/btn/m")
    {
      Serial.write('m');
      client.println(F("m"));
    }
    else if(req == "/btn/n")
    {
      Serial.write('n');
      client.println("n");
    }
    else if(req == "/btn/o")
    {
      Serial.write('o');
      client.println(F("o"));
    }
    else if(req == "/btn/p")
    {
      Serial.write('p');
      client.println(F("p"));
    }
    else if(req == "/btn/q")
    {
      Serial.write('q');
      client.println("q");
    }
    else if(req == "/btn/x")
    {
      Serial.write('x');
      client.println(F("x"));
    }
    else if(req == "/btn/1")
    {
      Serial.write('1');
      client.println(F("1"));
    }
    else if(req == "/btn/2")
    {
      Serial.write('2');
      client.println("2");
    }
    else if(req == "/btn/3")
    {
      Serial.write('3');
      client.println(F("3"));
    }
    else if(req == "/btn/4")
    {
      Serial.write('4');
      client.println("4");
    }
    else if(req == "/btn/5")
    {
      Serial.write('5');
      client.println(F("5"));
    }
    else if(req == "/btn/0")
    {
      Serial.write('0');
      client.println("0");
    }
    else
    {
        s = "HTTP/1.1 404 Not Found\r\n\r\n";
        Serial.println("Sending 404");
    }
    //client.print(s);

    //client.stop();
    //Serial.println("Done with client");

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
