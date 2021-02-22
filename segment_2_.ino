/*
    12
13      11
     7
 8      10
     9  
 */

int digitnum[10][7]={
//13,12,11,10, 9, 8, 7
  {1, 1, 1, 1, 1, 1, 0},//0
  {0, 0, 1, 1, 0, 0, 0},//1
  {0, 1, 1, 0, 1, 1, 1},//2
  {1, 1, 1, 1, 1, 1, 0},//3
  {1, 0, 1, 1, 0, 0, 1},//4
  {1, 1, 0, 1, 1, 0, 1},//5
  {1, 0, 0, 1, 1, 1, 1},//6
  {1, 1, 1, 1, 0, 0, 0},//7
  {1, 1, 1, 1, 1, 1, 1},//8
  {1, 1, 1, 1, 0, 0, 1}//9
}

void setup() {
  for(int i=13; i>6; i--){
      pinMode(i,OUTPUT);
  }
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  Serial.begin(9600);
}
int num=12;
int num1=0;
int num2=0;
unsigned long time=0;
void loop() {
  if(num>99){
    num=0;
  }
  printNum(num);
 if(millis()-time>1000){
  time=millis();
  num++;
  Serial.println(time);
 }
}

void printNum(int di){
  int count=0;
  num1=di/10;
  num2=di%10;
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  for(int i=13;i>6;i--){
    digitalWrite(i,digitalnum[num1][count]);
    count++;
  }
  delay(10);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  count=0;
  for(int i=13;i>6;i--){
    digitalWrite(i,digitalnum[num2][count]);
    count++;
  }
  delay(10);
}
