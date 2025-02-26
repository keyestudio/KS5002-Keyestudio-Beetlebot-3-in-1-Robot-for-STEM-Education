//**********************************************************************************
/*
Project 13 IR Remote Control
*/
#include <IRremote.hpp>

#define IR_RECEIVE_PIN   19   // Defines infrared receiver module pins
IRrecv irrecv(IR_RECEIVE_PIN);     // Creates a class object that receives the class
decode_results results;     // Create a decoded result class object

void setup() {
  Serial.begin(115200);       // Example Initialize the serial port and set the baud rate to 115200
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);  // Start receiver
}

void loop() {
  if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);  // Print raw data
      //IrReceiver.printIRResultShort(&Serial); // Print the complete received data in one line
      //IrReceiver.printIRSendUsage(&Serial);  // Print the statement needed to send this data
      IrReceiver.resume(); // Enable receiving the next value
  }
  delay(100);
}
//**********************************************************************************
