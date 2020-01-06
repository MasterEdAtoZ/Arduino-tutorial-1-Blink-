int LED = 13; // int variable = value;

void setup() {
  pinMode(LED,OUTPUT);

}

void loop() {
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);

}
