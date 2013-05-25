/* Blink : Turns led on for a second then off for a second, repeat.
*/

// Pin 13 is connected to the LED
int led = 13;

// the setup code runs once you press reset:
void setup() {
// initialise digital pin as output.
pinMode(led, OUTPUT);
}
// this routine runs over and over again.
void loop() {
  // put your main code here, to run repeatedly: 
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
}
