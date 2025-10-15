int moisturePin = 34;  //moisture pin
int moisture = 0;      //subsequent moisture values
int moistureValue = 0;  //value red from moisture sensor
int buzzer = 4;
int led = 2;

void setup(){
  Serial.begin(9600);//send moisture reading to IDE screen
  Serial.println("Soil Moisture sensor");
  pinMode(moisturePin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  moistureValue = analogRead(moisturePin);

  if(moistureValue != moisture){
    moisture = moistureValue;
    Serial.print("A = "); //Show the resistance value of the sensor in the IDE
    Serial.println(moisture);
  }
  delay(1000);

  if (analogRead(moisturePin) > 900){   //If the reading is greater than this 900 threshold
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}

