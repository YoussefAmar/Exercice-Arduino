int led=1; float recu;

void setup() {

Serial.begin(9600);

}

void loop() {

recu = analogRead(led);

recu = recu*5/1023;

Serial.println(recu);


delay(1000);

}
