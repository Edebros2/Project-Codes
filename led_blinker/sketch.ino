#define pushbutton 2
#define ledpin 5

int buttonstate = 0;

void setup()
{
  pinMode(pushbutton, INPUT_PULLUP);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  buttonstate = digitalRead(pushbutton);
  if (buttonstate == HIGH)
  {
    digitalWrite(ledpin, LOW);
  }
  else{
    digitalWrite(ledpin, HIGH);
  }
}