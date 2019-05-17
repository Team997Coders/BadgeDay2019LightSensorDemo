//Make sure to turn on serial plotter to see the data on a graph

int sensorPin = A0; // select the input pin for LDR in this case analog 0

 // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
 // read the value from the sensor
Serial.println(analogRead(sensorPin)); //prints the values coming from the sensor on the screen

delay(100);

}
