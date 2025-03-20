int measurePin = A0;
int gLED = 1;
int yLED = 2;
int rLED = 3;

int samplingTime = 200;
int deltaTime = 40;

float voMeasured = 0;
float calcVoltage = 0;
float dustDensity = 0;

void setup() {
  Serial.begin(9600);
  pinMode(gLED, OUTPUT);
  pinMode(yLED, OUTPUT);
  pinMode(rLED, OUTPUT);
}

void loop() {
  digitalWrite(gLED, LOW);
  digitalWrite(yLED, LOW);
  digitalWrite(rLED, LOW);

  voMeasured = analogRead(measurePin);

  delayMicroseconds(deltaTime);
  calcVoltage = voMeasured * (5.0 / 1024.0);
  dustDensity = 170 * calcVoltage - 0.1;

  if (dustDensity < 100)
  {
    digitalWrite(gLED, HIGH);
  }
  else if ((dustDensity > 100) && (dustDensity < 250))
  {
    digitalWrite(yLED, HIGH);
  }
  else if (dustDensity > 250)
  {
    digitalWrite(rLED, HIGH);
  }

}
