void setup() {
  pinMode(3, OUTPUT); //Skonfiguruj pin D1 jako wyjście
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH); //Włączenie diody
  delay(60000); //czas włączonej diody
  digitalWrite(3, LOW); //Wyłączenie diody
  delay(0); //czasy przed zapaleniem się kolejnej diody
  digitalWrite(2, HIGH); //Włączenie diody
  delay(60000); //czas włączonej diody
  digitalWrite(2, LOW); //Wyłączenie diody
  delay(0); //czasy przed zapaleniem się kolejnej diody
  digitalWrite(4, HIGH); //Włączenie diody
  delay(60000); //czas włączonej diody
  digitalWrite(4, LOW); //Wyłączenie diody
  delay(0); //czasy przed zapaleniem się kolejnej diody


}
