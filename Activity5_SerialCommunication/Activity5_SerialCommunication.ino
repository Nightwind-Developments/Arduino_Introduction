/*
 * Nightwind Developments Arduino Introduction
 * Activity 5: Serial Communication
 * 
 * Date Created: 14 July 2020
 * 
 * Description: This program simply demonstrates recieving text via Serial communication and then responding with the same message.
 * 
 * License: Creative Commons Zero v1.0 Universal License
 * More information can be viewed here: https://github.com/Nightwind-Developments/Arduino_Introduction/blob/master/LICENSE.md
 */

#include <Arduino.h>

#define MONITOR_SPEED 9600
#define WELCOME_MSG "Welcome! Simply type in a message in the Serial Monitor, press enter and see your message sent back to you!\n"
#define REPORT_MSG "Your Wrote: "

String input = "";  // Input Message Buffer

void setup() {
  Serial.begin(MONITOR_SPEED);
  input.reserve(200); // Reserves 200 Bytes
  Serial.println(WELCOME_MSG);
}

void loop() {
  while(Serial.available()){  // While the Serial Port buffer has more than 0 bytes
    char c = (char) Serial.read();  // Convert that byte into an ASCII character
    
    if(c == '\n'){  // If the current character is a new line, then send the message back to the user
      Serial.println(REPORT_MSG); // Message to the user before their message
      Serial.println(input);  // The message received being sent back
      Serial.println(); // Empty Line
      input = ""; // Resets the Input Message Buffer
    } else {
      input += c; // Save the character into the input buffer variable
    }
  }
}
