int Led = 2;

void setup() {

 pinMode(Led, OUTPUT);

}

void loop() {

  digitalWrite(Led, HIGH);
  delay (10000);
  digitalWrite(Led, LOW);
  delay(10000);

}
