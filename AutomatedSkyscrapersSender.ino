


void setup() {
Serial.begin(9600);

pinMode(2,OUTPUT);

digitalWrite(2,LOW);
}

void loop() {


  if(Serial.available()){

  char c=Serial.read();

Serial.println(c);
switch(c){
  case '1':

    digitalWrite(2,HIGH);
    delay(1000);
   digitalWrite(2,LOW);
    //delay(1000);
    Serial.println(c);
    break;
case '2':
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
    delay(1000);
    Serial.println(c);
    break;
 case '3':
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    delay(1000);
    Serial.println(c);
     break;
case '4':
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(1000);
    Serial.println(c);
    break;
case '5':
    digitalWrite(6,HIGH);
    delay(250);
    digitalWrite(6,LOW);
    delay(1000);
    Serial.println(c);
    break;


case '6':
    digitalWrite(7,HIGH);
    delay(250);
    digitalWrite(7,LOW);
    delay(1000);
    Serial.println(c);
    break;
  }
}
}
