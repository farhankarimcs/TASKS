//variable definition

//user defined constants
//digital 1-13
const int mylights[]={13,12,11,10,9,8,7,6,5,4,3,2,1,0};
int i=0;
void setup() {
//pin mode definition
for(i=0;i<14;i++){
    pinMode(mylights[i],OUTPUT);
  }

}

void loop() {

  for(i=0;i<14;i++){
   digitalWrite(mylights[i],HIGH);
   delay(500);
   digitalWrite(mylights[i],LOW);
   delay(500);
  }
 
}