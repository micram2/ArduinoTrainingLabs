/*Programmer: Miles
 * Date: 11/6/19
 * Program: Blink
 * 
 * 
 * This Program will turn on an LED for specified ammount of time, 
 * turn it off and back on in a while Loop
 * 
 * 
 * -------------------------------Merged on 12.2.19-----------------------------------
 * 
 * Programmer: Miles
 * Date: 11/14/19
 * Program: Digital read and the serial port
 * 
 * 
 * This Program will read a digital input on pin2, prints the result 
 * to the serial monitor
 */


// Initialize our led to pin 13
int led = 13;

//digital pin2 has a push button attached to it
int pushButton = 2;



void setup() {
  // Using the function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);

  //This initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushbutton pin an input
  pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);


  // read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button 
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability
}
