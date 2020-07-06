int led=3, pot=1; float recu;

void setup() {

pinMode(led, OUTPUT);

Serial.begin(9600);

}

void loop() {

recu = analogRead(pot);

recu = recu*255/1023;

analogWrite(led,recu);

}
