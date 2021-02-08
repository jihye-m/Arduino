void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ar = analogRead(A0);
  if(ar>900)
    digitalWrite(13,HIGH);
  else if(ar<600)
    digitalWrite(13,LOW);
  Serial.println("analog value : " + (String)ar);
  delay(10);
}
