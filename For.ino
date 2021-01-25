
int t=100;

void setup() {
  // put your setup code here, to run once:
  for(int i=13;i>8;i--)
  {
  pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=13;i>8;i--)
  {
  digitalWrite(i,HIGH);
  delay(t);
  }
  for(int i=9;i<14;i++)
  {
  digitalWrite(i,LOW);
  delay(t);
  }
  
}
