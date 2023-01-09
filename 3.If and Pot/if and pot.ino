int green =3;
int yellow =8;
int red = 11;
int meter = A2;
float V;
int output;
int sec=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(meter,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  output=analogRead(meter);
  V=(5./1023.)*output;
  Serial.print("The voltage is :");
  Serial.println(V);
  if (V<=3){
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(yellow,LOW);
    delay(sec);
  }
  if (V>3 && V<4){
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);
    digitalWrite(yellow,HIGH);
    delay(sec);
  }
  if (V>4){
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
    digitalWrite(yellow,LOW);
    delay(sec);
  }
}
