//**********************************************************************************
/*
  Project 15: WiFi Station Mode
  Description : Connect to your router using ESP32
*/
#include <WiFi.h>
  
const char *ssid_Router     = "REPLACE_WITH_YOUR_SSID"; //Enter the router name
const char *password_Router = "REPLACE_WITH_YOUR_PASSWORD"; //Enter the router password 

void setup(){
  Serial.begin(115200);
  delay(2000);
  Serial.println("Setup start");
  WiFi.begin(ssid_Router, password_Router);
  Serial.println(String("Connecting to ")+ssid_Router);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected, IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Setup End");
}
 
void loop() {
}
//**********************************************************************************
