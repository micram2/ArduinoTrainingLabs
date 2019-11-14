/*Programmer: Miles
 * Date: 11/14/19
 * Program: Digital read and the serial port
 * 
 * 
 * This Program will read a digital input on pin2, prints the result 
 * to the serial monitor
 */

//digital pin2 has a push button attached to it
int pushButton = 2;



void setup() {
  //This initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushbutton pin an input
  pinMode(pushbutton, INPUT)
 
}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button 
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability

}
