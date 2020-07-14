/*
 * Nightwind Developments Arduino Introduction
 * Activity 2: Button & Buzzer
 * 
 * Author: Rowan Rathod
 * Date Created: 14 July 2020
 * 
 * Description: This program allows microcontroller to sound a buzzer everytime a button is pushed.
 * This source code demonstrates the use of:
 *  * digitalRead();
 *  * digitalWrite();
 *  * Serial.print();
 * 
 * License: Creative Commons Zero v1.0 Universal License
 * More information can be viewed here: https://github.com/Nightwind-Developments/Arduino_Introduction/blob/master/LICENSE.md
 */
#include <Arduino.h>

 #define MONITOR_SPEED 9600

const int bzr = 11; // Pin for Buzzer
const int btn = 12; // Pin for Button
int pushCounter = 0;

void setup() {
  pinMode(bzr, OUTPUT); // Configures the Buzzer connection as an output
  pinMode(btn, INPUT);  // Configures the Buzzer connection as an input

  Serial.begin(MONITOR_SPEED); // Starts the Serial Monitor at the preconfigured speed
}

void loop() {
  if(digitalRead(btn) == LOW){  // Checks if the button state is LOW (Pushed)
    digitalWrite(bzr, HIGH);  // Sets the buzzer to HIGH to produce a sound
    Serial.print("Button Pushed "); // Reports the button has been pushed
    Serial.print(++pushCounter);  // Increments the button push counter and reports it
    Serial.println(" Times!");
  } else {
    digitalWrite(bzr, LOW); // Sets the buzzer to LOW to turn the buzzer off
  }
}
