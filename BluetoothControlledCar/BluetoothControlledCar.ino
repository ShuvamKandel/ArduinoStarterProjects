int lf = 2;
int lb = 3;
int rf = 5;
int rb = 4;
char m = "z";


void setup() {
  pinMode(lf,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(rf,OUTPUT);
  pinMode(rb,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 if(Serial.available()){
  m = Serial.read();
  Serial.println(m);
 }
 
  if(m=='F'){
    digitalWrite(lf,HIGH);
    digitalWrite(lb,LOW);
    digitalWrite(rf,HIGH);
    digitalWrite(rb,LOW);
    }
    else if(m=='B'){
    digitalWrite(lf,LOW);
    digitalWrite(lb,HIGH);
    digitalWrite(rf,LOW);
    digitalWrite(rb,HIGH);
    }
    else if(m=='L'){
    digitalWrite(lf,LOW);
    digitalWrite(lb,HIGH);
    digitalWrite(rf,HIGH);
    digitalWrite(rb,LOW);
      }
      else if(m=='R'){
    digitalWrite(lf,HIGH);
    digitalWrite(lb,LOW);
    digitalWrite(rf,LOW);
    digitalWrite(rb,HIGH);
      }
      else{
    digitalWrite(lf,LOW);
    digitalWrite(lb,LOW);
    digitalWrite(rf,LOW);
    digitalWrite(rb,LOW);
        }

}
