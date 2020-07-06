int Led=2, bouton=7, validation=0;
void setup() {

pinMode(Led,OUTPUT);
pinMode(bouton, INPUT);

}

void loop() {

digitalWrite(Led,HIGH);

validation = digitalRead(bouton);

digitalWrite(Led,validation);


}
