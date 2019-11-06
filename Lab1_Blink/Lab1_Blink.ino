/*Programmer: Miles
 * Date: 11/6/19
 * Program: Blink
 * 
 * 
 * This Program will turn on an LED for specified ammount of time, 
 * turn it off and back on in a while Loop
 */

// Initialize our led to pin 13
int led = 13;



void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
