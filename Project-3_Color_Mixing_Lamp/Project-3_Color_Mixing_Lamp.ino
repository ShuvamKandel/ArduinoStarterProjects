const int greenLEDPin = 9;
const int redLEDPin = 10;
const int blueLEDPin = 11;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() 
{
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() 
{
  redSensorValue=analogRead(redSensorPin);
  delay(5);
  greenSensorValue=analogRead(greenSensorPin);
  delay(5);
  blueSensorValue=analogRead(blueSensorPin);

  Serial.print("\n Raw sensor values \n Red: ");
  Serial.print(redSensorValue);

  Serial.print("\n Green: ");
  Serial.print(greenSensorValue);

  Serial.print("\n Blue: ");
  Serial.print(blueSensorValue);
  
  redValue=redSensorValue/4;
  greenValue=greenSensorValue/4;
  blueValue=blueSensorValue/4;

  Serial.print("Mapped Sensor Values \n Red: ");
  Serial.print(redValue);

  Serial.print("\n Green: ");
  Serial.print(greenValue);
  
  Serial.print("\n Blue: ");
  Serial.print(blueValue);

  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}
