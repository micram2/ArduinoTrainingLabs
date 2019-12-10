/*Programmer: Miles
   Date: 12/3/19
   Program: Potentiometer

   AnalogReadSerial
   Reads an anolog input on pin A0, prints to the serial monitor

  Update: 12/10/19
  Add serial read to be able to read voltages from 0 to 5 volts
*/


void setup() {
 // initialize the serial communication at 9600 bits per second
 Serial.begin(9600);

 
}

void loop() {
  // read input on analog pin A0
  int potentiometerValue = analogRead(A0);

  //Convert the analogRead from 0-1023 to 0-5 volts
  float voltage = potentiometerValue * (5.0 / 1023.0);
  

  // print the value of our potentiometer
  Serial.println(voltage);


  //add a delay for stability
  delay(1);

}
