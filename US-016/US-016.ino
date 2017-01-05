int US = A0;
int om ; // one meter
int tm ; // three meter
void setup() {
  Serial.begin(9600);
}

void loop() {
  om = analogRead(US);
  tm = om * 3;
  Serial.print(om); // one meter
  // Serial.print(tm); // three meter
  Serial.println(" mm");
  delay(100);
}
