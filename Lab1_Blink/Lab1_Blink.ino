/*Programmer: Miles
 * Date: 11/6/19
 * Program: Blink
 * 
 * 
 * This Program will turn on an LED for specified ammount of time, 
 * turn it off and back on in a while Loop
 * 
 * Update: 11/22/19
 * Program: update blink to allow my LED to fade
 */

// Initialize our led to pin 9
int led = 9;            //the pin that the Led is attached to on the arduino board
int brightness = 0;     // how bright the LED is
int fadeAmount = 5;     // How many points to fade the LED


void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // Set the brightness of pin 9 (LED)
  analogWrite(led, brightness);

  //change the brightness for the next time through the loop
  brightness = brightness + fadeAmount;

  //reverse the direction of the fading at the end of the fade
  if (brightness == 0 || brightness == 255) {
   fadeAmount = -fadeAmount;
  }
  delay(30);
  
}
