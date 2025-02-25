//**********************************************************************************
/*
Project 13 IR Remote Control
*/
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t recvPin = 19;  // set ir receiver to pin IO19
IRrecv irrecv(recvPin);      // Creates a class object for the receiver
decode_results results;       // Create the decoded result class object

void setup() {
  Serial.begin(115200);       // set baud rate to 115200
  irrecv.enableIRIn();        // start receiver
  Serial.print("IRrecvDemo is now running and waiting for IR message on Pin ");
  Serial.println(recvPin);   //Print the signal received by the infrared receiving pin
}

void loop() {
  if (irrecv.decode(&results)) {          // Wait for decoding
    serialPrintUint64(results.value, HEX);// Print out the decoded result
    Serial.println("");
    irrecv.resume();                      // Release the IRremote. Receive the next value
  }
  delay(100);
} 
//**********************************************************************************
