int ena1 = 5;
int input1 = 6;
int input2 = 7;
int input3 = 8;
int input4 = 9;
int ena2 = 10;
int vena = 120;


void setup() {
pinMode(input1,OUTPUT);
pinMode(input2,OUTPUT);
pinMode(input3,OUTPUT);
pinMode(input4,OUTPUT);
pinMode(ena1, OUTPUT);
pinMode(ena2, OUTPUT);
}

void loop() {
  
  // go  forward
  analogWrite(ena1, vena);
  analogWrite(ena2, vena);
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);  
  digitalWrite(input3,HIGH);
  digitalWrite(input4,LOW);  
  delay(1000);   //1 second wait

 // stop
 analogWrite(ena1, vena);
 analogWrite(ena2, vena);
 digitalWrite(input1,LOW);
 digitalWrite(input2,LOW);  
 digitalWrite(input3,LOW);
 digitalWrite(input4,LOW);  
 delay(1000);   //1 second wait

  
  // go  back
  analogWrite(ena1, vena);
  analogWrite(ena2, vena);
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);  
  digitalWrite(input3,LOW);
  digitalWrite(input4,HIGH);  
  delay(1000);   // 1 second wait 


 // stop
 digitalWrite(input1,LOW);
 digitalWrite(input2,LOW);  
 digitalWrite(input3,LOW);
 digitalWrite(input4,LOW);  
 delay(1000);  //1 second wait

 // go Right
 analogWrite(ena1, vena);
 analogWrite(ena2, vena);
 digitalWrite(input1,HIGH);
 digitalWrite(input2,LOW);  
 digitalWrite(input3,LOW);
 digitalWrite(input4,HIGH);  
 delay(1000);   //1 second wait

 // stop
 analogWrite(ena1, vena);
 digitalWrite(input1,LOW);
 digitalWrite(input2,LOW);  
 digitalWrite(input3,LOW);
 digitalWrite(input4,LOW);  
 delay(1000);   //1 second wait

  // go Left
 analogWrite(ena1, vena);
 analogWrite(ena2, vena);
 digitalWrite(input1,LOW);
 digitalWrite(input2,HIGH);  
 digitalWrite(input3,HIGH);
 digitalWrite(input4,LOW);  
 delay(1000);  //1 second wait
 
 // stop
 analogWrite(ena1, vena);
 analogWrite(ena2, vena);
 digitalWrite(input1,LOW);
 digitalWrite(input2,LOW);  
 digitalWrite(input3,LOW);
 digitalWrite(input4,LOW);  
 delay(1000);  //1 second wait
 

}
