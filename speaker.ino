#define do1  262
#define re1  294
#define mi1  330
#define fa1  349
#define sol1  392
#define la1  440
#define si1  494
#define do2  523
int music[]={sol1,sol1,la1,la1,sol1,sol1,mi1,
             sol1,sol1,mi1,mi1,re1
};
int tonelen[]={4,4,4,4,4,4,2,2,
               4,4,4,4,2,2
};
int alllen[]={11};

void setup() {
  pinMode(13,INPUT_PULLUP);
}

void loop() {
  if(!digitalRead(13))
  {
    playmusic();
  }
}
void playmusic(){
  for(int i = 0; i < alllen; i++){
    tone(8, music[i], 1000/tonelen[i]);
    delay(1000/tonelen[i]*1,3);
  }
}
