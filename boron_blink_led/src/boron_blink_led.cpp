/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/RnD/particle-dev/boron_blink_led/src/boron_blink_led.ino"
/*
 * Project boron_blink_led
 * Description:
 * Author:
 * Date:
 */

void setup();
void loop();
#line 8 "d:/RnD/particle-dev/boron_blink_led/src/boron_blink_led.ino"
int led1 = D0;
int led2 = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  delay(1000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  delay(1000);
}