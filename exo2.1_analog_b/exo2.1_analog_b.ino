int pin_w = 3, pin_r = 0, pin_r0 = 2, v=10; float a1 = 0, a0 = 0, ib ;


void setup() {

  pinMode(pin_w, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  analogWrite(pin_w,v);
  delay(5000);
  a1= analogRead(pin_r);
  a0= analogRead(pin_r0);
  a0 = a0*5/1023;
  a1 = a1*5/1023;
  ib =((a0-a1)/10);
  Serial.print(" v :  ");
  Serial.print(v);
  Serial.print("         ");
  Serial.print("Ib : ");
  Serial.print(ib);
  Serial.print("         ");
  Serial.print("Vbe : ");
  Serial.println(a1);
  v = v+10;


}
