
  
void setup() {
  

Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}


  
void tune1(int time)  //tune 1 ->Here time is the delay value in milliseconds
{
  

tone(8,500);
  delay(150);
noTone(8);
  delay(time);
    

tone(9,500);
  delay(150);
noTone(9);
  delay(time);
  

tone(8,500);
  delay(150);
noTone(8);
  delay(time);
    

tone(9,500);
  delay(150);
noTone(9);
  delay(time);
  


tone(9,700);
  delay(150);  
tone(8,700);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);
  
 tone(9,800);
  delay(150);  
tone(8,800);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);
  
  tone(9,900);
  delay(150);  
tone(8,900);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);

}



//Tune 2
void tune2(int time)   //Here time is the delay value in milliseconds
{
 
  
tone(8,500);
  delay(200);
noTone(8);
  delay(time/6);
  
  
  tone(9,700);
  delay(150);  
tone(8,700);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);
  
  
    tone(9,800);
  delay(150);  
tone(8,800);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);
  
  tone(9,900);
  delay(150);  
tone(8,900);
  delay(150);
noTone(8);
  noTone(9);
  delay(time/3);

 
tone(8,500);
  delay(150);
noTone(8);
  delay(time/2);
    

tone(9,500);
  delay(150);
noTone(9);
  delay(time/2);
  

tone(8,500);
  delay(150);
noTone(8);
  delay(time/2);
    

tone(9,500);
  delay(150);
noTone(9);
  delay(time/2);

}




void loop() {
  
  char input;
  if(Serial.available())
  {input=Serial.read();
   Serial.println(input);
  }
  


int i,j;
int a=3;

  
switch(input)
{
  
  case 'a' :  for(i=0;i<a;i++)
  				{ tune1(600);
  				
                }
              break;		 
  
  case 'b' :  for(i=0;i<a;i++)
 			{
 				 tune1(400);
 			}
   			break;

 
  case 'c' :  for(i=0;i<a;i++)
 				{
  					tune1(200);
 				}
  			break;
 		 

  case 'd' : for(i=0;i<a;i++)
				 {
					  tune2(600);
				 }
  			break;

 case 'e' : for(i=0;i<a;i++)
 				{
  						tune2(400);
 				}
  			break;

 case 'f' : for(i=0;i<a;i++)
 				{
 						 tune2(200);
 				}
  			break;
  }
  

}
  






