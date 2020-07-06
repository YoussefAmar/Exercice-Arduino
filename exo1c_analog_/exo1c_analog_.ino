int Led= 3, a=0;

void setup() {

pinMode(Led, OUTPUT);

}

void loop() {


do
{
 analogWrite(Led, a);
a++;
delay(10);
}

while(a<255);

delay(10);

do
{
  analogWrite(Led, a);
  a--;
  delay(10);
}
while(a!=0);

delay(10);

}
