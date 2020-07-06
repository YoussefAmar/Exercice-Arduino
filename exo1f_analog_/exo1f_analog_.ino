int red = 3, blue = 5, green = 6, cpt=0, validation = 0, bouton = 2;

void setup() {
  
pinMode(red,OUTPUT);

pinMode(blue,OUTPUT);

pinMode(green,OUTPUT);

pinMode(bouton, INPUT);

}

void loop() {
           analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,0);
  delay(1000);
           analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,128);
  delay(1000);
          analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,255);
  delay(1000);
          analogWrite(red,0);
           analogWrite(blue,0);
           analogWrite(green ,255);
  delay(1000);
          analogWrite(red,0);
           analogWrite(blue,255);
           analogWrite(green ,255);
  delay(1000);
          analogWrite(red,0);
           analogWrite(blue,255);
           analogWrite(green ,0);
  delay(1000);
          analogWrite(red,255);
           analogWrite(blue,255);
           analogWrite(green ,255);
           
 /*validation = digitalRead(bouton);

if(validation == 1)
{
 cpt++;
}

switch(cpt)
{ 
  case 1 : analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,0); break;
           
   case 2 : analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,128);break;
           
   case 3 : analogWrite(red,255);
           analogWrite(blue,0);
           analogWrite(green ,255);break;
           
   case 4 : analogWrite(red,0);
           analogWrite(blue,0);
           analogWrite(green ,255);break;

   case 5 : analogWrite(red,0);
           analogWrite(blue,255);
           analogWrite(green ,255);break;
           
   case 6 : analogWrite(red,0);
           analogWrite(blue,255);
           analogWrite(green ,0); break;
           
   case 7 : analogWrite(red,255);
           analogWrite(blue,255);
           analogWrite(green ,255); break;
            

}

 if(cpt == 7)
 {
    cpt = 0;
 }*/

 delay(1000);
}
