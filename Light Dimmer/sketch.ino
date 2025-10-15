int potpin = 14;
int potvalue = 0;
int ledpin = 25;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop()
{
  potvalue = analogRead(potpin);

  analogWrite(ledpin, potvalue/4);

  delay(10);
}