int pin_w = 3, pin_a1 = 0, pin_a0 = 1, pin_a2 = 5, pin_a3 = 4, v = 25; float a1 = 0, a0 = 0, a2 = 0, a3 = 0,ib = 0, ic = 0;

void setup() {
 pinMode(pin_w, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 analogWrite(pin_w,v);
 delay(5000);
  a1= analogRead(pin_a1);
  a0= analogRead(pin_a0);
  a0 = a0*5/1023;
  a1 = a1*5/1023;
  ib =((a0-a1)/10);
  a3= analogRead(pin_a3);
  a2= analogRead(pin_a2);
  a2 = (a2*5/1023)*6;
  a3 = (a3*5/1023)*6;
  ic =((a2-a3)/10);
  
  Serial.print(" v :  ");
  Serial.print(v);
  Serial.print("         ");
  Serial.print("Ib uA :   ");
  Serial.print(ib);
  Serial.print("         ");
  Serial.print("Ic -1A :  ");
  Serial.println(ic);
 
  v = v+25;

}
