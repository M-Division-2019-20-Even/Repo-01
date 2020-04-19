void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}


//Tune 1
void tune1(int time)   //Here time is the delay value in milliseconds
{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(time);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(time);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(time);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(time);
}



//Tune 2
void tune2(int time)   //Here time is the delay value in milliseconds
{
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(time);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(time);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(time);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(time);

}




void loop() {
 
if(Serial.available()>'0')
{                                     //input from bluetooth
  char data=(char)Serial.read();
  char choice;


switch(data)
{


  case 'a': while(1)                        // a -> Tune 1 Low tempo (delay of 600 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune1(600);
          else{
            break;
          }          
  }        
            break;  
    
   case 'b': while(1)                        // b -> Tune 1 Mid tempo (delay of 400 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune1(400);
          else{
            break;
          }          
  }        
            break; 
    
     case 'c': while(1)                        // c -> Tune 1 high tempo (delay of 200 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune1(200);
          else{
            break;
          }          
  }        
            break; 
    
     case 'd': while(1)                        // d -> Tune 2 Low tempo (delay of 600 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune2(600);
          else{
            break;
          }          
  }        
            break; 
 
     case 'e': while(1)                        // e -> Tune 2 Mid tempo (delay of 400 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune2(400);
          else{
            break;
          }          
  }        
            break; 
    
     case 'f': while(1)                        // f -> Tune 2 High tempo (delay of 200 milliseconds)
  {         choice=(char)Serial.read();
          if(choice == '1')
            tune2(200);
          else{
            break;
          }          
  }        
            break; 
      
}

}
}

