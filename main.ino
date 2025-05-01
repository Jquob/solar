//this code does not work because i dont know ur exact components, ill figure that out once you actually have them.

void setup() {
  //sets the motors pin mode to digital input (1)
  void pinMode(int {pin}, int 1) //change out the {pin} to the pin the motor is on!
  //dont know what type of motor you have or how to drive it, thats ur problem
  //some code to point the motor straight up should go here, or add a manual calibration step
  
}

void loop() {
  //first we will take the value of sensor 1
  int sens1 = analogRead(int {pin}) //replace {pin} with pin number!
  //next we get the value of sensor 2 and put it in the negatives
  int sens2 = -1 * analogRead(int {pin}) //replace {pin} with pin number!
  //the two sensors combined
  int sens3 = sens1 + sens2
  //averaging out the values, this will be a -100 to 100 value
  int sens0 = sens3 / 2
  //get the degree value for the rotation
  int deg = sens0 * 180
  //some code to rotate the moter as much as needed, again i have no clue what type of motor you have, so either ur problem or later me problem
}
