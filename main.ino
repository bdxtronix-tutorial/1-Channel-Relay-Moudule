void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);
pinMode(7,OUTPUT);   // setkan RelayPin sebagai output
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(7,HIGH);
Serial.println("Relay OFF");    //Relay OFF, DC motor tidak berpusing
delay(3000);             // Motor berhenti berpusing untuk 3 saat
digitalWrite(7,LOW);
Serial.println("Relay ON");    // Relay ON, DC motor berpusing (relay in active low)
delay(3000); 

}
