void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{

  char data=(char)Serial.read();

switch(data)
{

//Tune 1
  case 'a': while(1)
            {char off
            off=(char)Serial.read();
             if(off=='1')
                break;
             else{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(600);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(600);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(600);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(600);
            
              
              
             }
                
              }}
            break;
  case 'b': while(1)
            {char off=(char)Serial.read();
             if(off==1)
                break;
             else{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(400);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(400);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(400);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(400);
              
               }}
            break;
  case 'c': while(1)
            {char off=(char)Serial.read();
             if(off==1)
                break;
             else{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(200);
              
              
              }}
            break;
//Tune 2

  case 'd': while(1)
            {
              char off=(char)Serial.read();
             if(off==1)
                break;
             else{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(600);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(600);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(600);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(600);
              
             }
              }
           break;
  case 'e': while(1)
            {
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(400);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(400);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(400);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(400);
              }
           break;
  case 'f': while(1)
            {
              char off=(char)Serial.read();
             if(off==1)
                break;
             else{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);             
              
                 }
        
      
}

  
}
}
