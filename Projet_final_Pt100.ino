int pin = 5; float vanalout = 0, vout = 0 ,degres = 0, kelvin = 0;

void setup() {

pinMode(pin, OUTPUT);

Serial.begin(9600);

}

void loop() 
{
vanalout = (analogRead(pin)+analogRead(pin)+analogRead(pin)+analogRead(pin))/4; //Lecture de la ddp en valeur analogique
vout = vanalout*0.024/1023; //Conversion de la valeur analogique en voltage
vout = vout*200; // Amplification de la valeur pour que le voltage max = 5V

if(vout >= 4.8) //Notre tension maximal pour les 40°C se trouve à 4.8 V donc une fois ce cap dépassé, on dépasse la température limite
{
  Serial.print("Température supérieure à 40°C");
  Serial.println("");
  delay(1000);
}
else
{
degres = vanalout*40/1023; //Conversion de la valeur du volt en degres
kelvin = degres + 273.15; //Conversion degres en kelvin
Serial.print("Temp : ");
Serial.print(degres);
Serial.print("°C - ");
Serial.print(kelvin);
Serial.print(" K");
Serial.println("");
delay(1000);
}
}
