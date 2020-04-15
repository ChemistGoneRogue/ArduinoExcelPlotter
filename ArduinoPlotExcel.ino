void setup() {

  Serial.begin(9600); //Any baudrate is fine

}
void loop() {
  //Not actually reading analog values
  //Just plotting 0-19 and starting over
  for (int i = 0; i < 20; i++) {
    Serial.println(i); //the Serial.println() is the part needed to send data to the plotter
    delay(500); //delay so the plotter has time to plot (can be way less than 500)  
  }
}
