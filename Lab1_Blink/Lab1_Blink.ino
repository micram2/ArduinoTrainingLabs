/*Programmer: Miles
   Date: 12/3/19
   Program: Potentiometer

   AnalogReadSerial
   Reads an anolog input on pin A0, prints to the serial monitor

*/


void setup() {
 // initialize the serial communication at 9600 bits per second
 Serial.begin(9600);

 
}

void loop() {
  // read input on analog pin A0
  int potentiometerValue = analogRead(A0);

  // print the value of our potentiometer
  Serial.println(potentiometerValue);


  //add a delay for stability
  delay(1);

}
