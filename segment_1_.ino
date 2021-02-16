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
  Serial.begin(9600);
}

int num=0;
void loop() {
  int count=0;
  if(Serial.available()){
    num=Serial.parselnt();
  }
  for(int i=13;i>6;i--){
    digitalWrite(i,digitalnum[num][count]);
    count++;
  }
}
