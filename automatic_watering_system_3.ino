int Relay=13;
int sensor=8;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(8);
  if(val==LOW)
  {
    digitalWrite(13,LOW);
  }
  if(val==HIGH)
  {
    digitalWrite(13,HIGH);
  }
  delay(400);

}
