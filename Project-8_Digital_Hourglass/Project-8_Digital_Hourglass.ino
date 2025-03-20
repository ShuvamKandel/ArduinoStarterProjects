const int switchPin = 8;
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
int led = 2;
long interval = 600;


void setup() {
  for (int i = 2; i < 8; i++){

    pinMode(i, OUTPUT);

  }
  pinMode(switchPin, INPUT);

}

void loop() {

  unsigned long currentTime = millis();

  if (currentTime - previousTime > interval) {

    previousTime = currentTime;
    digitalWrite(led, HIGH);
    led++;
  }

  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    
    for (int i = 2; i < 8; i++){
      digitalWrite(i, LOW);
    
    }
    led = 2;
    previousTime = currentTime;
  }
  prevSwitchState = switchState;


}
