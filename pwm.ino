void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<1024 ;i++)
  {
    analogWrite(11,i); 
    Serial.println("i value : " + (String)i);
    delay(10);
  }
}
