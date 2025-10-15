const int potPin = 35; //Analog input from potentiometer
int sensorValue = 0;   //value read from potentiometer
int timer = 0;   //Delay Value

// Set digital pins 12 and 11 as outputs
void setup(){
  pinMode(2, OUTPUT);   //white led
  pinMode(4, OUTPUT);  //blue led 

  pinMode(35, INPUT);
}

// Start a loop to turn LEDs on and off with a delay in between
void loop(){
  sensorValue = digitalRead(potPin);    // Read value from the 
                                    // potentiometer

  timer = map(sensorValue, 0, 4095, 100, 5000);  //Delay 10 to 500 ms
//NB map() converts a range of numbers to another range of numbers, in 
//In this case 0 - 4095 which is the range of values for esp32 input to ---
//to 10ms - 500ms which we want it to be. Think of it like scaling
  digitalWrite(2, HIGH);
  delay(timer);
  digitalWrite(2, LOW);
  delay(timer);
  digitalWrite(2, HIGH);
  delay(timer);
  digitalWrite(2, LOW);
  delay(timer);
  digitalWrite(4, HIGH);
  delay(timer);
  digitalWrite(4, LOW);
  delay(timer);
  digitalWrite(4, HIGH);
  delay(timer);
  digitalWrite(4, LOW);
  delay(timer);
}