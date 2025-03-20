int switchState = 0;
int switchPin = 2;
int motorPin = 9;


void setup() {

  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);

}

void loop() {

  switchState = digitalRead(switchPin);

  if (switchState == HIGH) {

    digitalWrite(motorPin, HIGH);

  }
  else if (switchState == LOW) {
    
    digitalWrite(motorPin, LOW);
  }


}
