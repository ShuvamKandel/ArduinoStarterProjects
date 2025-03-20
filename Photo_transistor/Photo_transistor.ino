int Vin = A0;
int read = 0;
int led = 6;

void setup() {
  pinMode(Vin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  read = analogRead(Vin);
  Serial.println(read);

  if (read == 1 || read == 2){
    digitalWrite(led, LOW);
s
  }
  else {
    digitalWrite(led, HIGH);
  }
  delay(50);
}
