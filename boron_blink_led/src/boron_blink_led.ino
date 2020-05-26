/*
 * Project boron_blink_led
 * Description:
 * Author:
 * Date:
 */

int led1 = D7;
// int led2 = D7;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(led1, OUTPUT);
  // pinMode(led2, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(led1, HIGH);
  // digitalWrite(led2, HIGH);

  delay(500);

  digitalWrite(led1, LOW);
  // digitalWrite(led2, LOW);

  delay(500);
}