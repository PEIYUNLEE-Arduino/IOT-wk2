int circle=1;
int ledcount=10;
int buttonPin=27;
int buttonState = 1;
int num=0;
int ledpins[]={23,22,21,12,19,18,17,16,15,14};
void setup() {
  // put your setup code here, to run once:
  for(int thisled=0;thisled<ledcount;thisled++){
    pinMode(ledpins[thisled],OUTPUT);
   // digitalWrite(ledpins[thisled],HIGH);
   // delay(1000);
  }
  digitalWrite(buttonPin,HIGH);
  pinMode(buttonPin,INPUT);
}


void loop() {
  buttonState = digitalRead(buttonPin);
  if(circle==1){
    if(buttonState==HIGH){
      digitalWrite(ledpins[num],HIGH);
    num++;
    delay(200);
    if(num==10){
      circle=2;
      num=9;
    }
   } 
  }
  else{
    if(buttonState==HIGH){
      digitalWrite(ledpins[num],LOW);
    num--;
    delay(200);
    if(num==-1){
      circle=1;
      num=0;
    }
   } 
  }
}
