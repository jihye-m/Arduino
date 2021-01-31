void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    int swt = (int)Serial.read();
    if(swt==49){
     digitalWrite(13,1);
     delay(1000); 
    }
    else{
     digitalWrite(13,0);
     delay(1000); 
    }
  }
}
