int verde=2;
int rojo=4;
int amarillo=6;
void setup() {
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(amarillo,OUTPUT);
}
  

void loop() {
digitalWrite(rojo,HIGH);
delay(100);
digitalWrite(rojo,LOW);
delay(400);

digitalWrite(verde,HIGH);
delay(100);
digitalWrite(verde,LOW);
delay(400);

digitalWrite(amarillo,HIGH);
delay(100);
digitalWrite(amarillo,LOW);
delay(400);

}
