/*
 * Nightwind Developments Arduino Introduction
 * Activity 3: Reading a Potentiometer
 * 
 * Author: Rowan Rathod
 * Date Created: 14 July 2020
 * 
 * Description: This program allows microcontroller to sound a buzzer everytime a button is pushed.
 * This source code demonstrates the use of:
 *  * analogRead()
 *  * Serial.print()
 *  * delay()
 * 
 * License: Creative Commons Zero v1.0 Universal License
 * More information can be viewed here: https://github.com/Nightwind-Developments/Arduino_Introduction/blob/master/LICENSE.md
 */
#include <Arduino.h>
#define MONITOR_SPEED 9600

const int pot = A1; // Analog Pin for the Potentiometer
int value = 0;

void setup() {
  Serial.begin(MONITOR_SPEED);
}

void loop() {
  value = analogRead(pot);
  Serial.print("Potentiometer Value: ");
  Serial.println(value);
  delay(500); // Waits 500 milliseconds
}
