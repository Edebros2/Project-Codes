const int potpin = 35;
const int ledcount = 9;
int ledpin[] = {15,2,17,4,16,12,27,26,25};


void setup(){
  for (int thisled = 0; thisled < ledcount; thisled++)
  {
    pinMode(ledpin[thisled], OUTPUT);
  }
}

void loop(){
  int sensorReading = analogRead(potpin);
  int ledLevel = map(sensorReading, 0, 4095, 0, ledcount);
  for (int thisled = 0; thisled < ledcount; thisled++)
  {
    if (thisled < ledLevel)
    {
      digitalWrite(ledpin[thisled], HIGH);
    }
    else{
      digitalWrite(ledpin[thisled], LOW);
    }
  }
}