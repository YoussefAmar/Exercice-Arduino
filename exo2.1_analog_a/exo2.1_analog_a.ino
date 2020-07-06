int pin = 3, a0 = 0, a1 = 2, v = 128; float a0v = 0, a1v = 0, ddp;

void setup() {

pinMode(pin, OUTPUT);

Serial.begin(9600);

}

void loop() {

analogWrite(pin,v);

a0v = (analogRead(a0)+ analogRead(a0)+ analogRead(a0) + analogRead(a0))/4;
a1v = (analogRead(a1) + analogRead(a1) + analogRead(a1) + analogRead(a1))/4;
ddp = a0v - a1v;
Serial.println("");
Serial.print("Valeur de a0 : ");
Serial.println(a0v);
Serial.print("Valeur de a1 : ");
Serial.println(a1v);
Serial.print("Valeur de la ddp : ");
Serial.println(ddp);
Serial.println("");
if(ddp > 102)
{
v = v-1;
}
else
{
Serial.println("OK"); 
delay(1000);
 
}
delay(500);


} 
