int soil;
void setup() {
  pinMode (3,OUTPUT);
  pinMode (6,INPUT);
}
void loop() {
  soil = digitalRead(6);
  if(soil == HIGH)
  {
  digitalWrite(3,LOW);
  }
  else
  {
  digitalWrite(3,HIGH);
  }
  delay(400);
}
