void setup() {
  pinMode(13, OUTPUT);  // chân 13 là output
}

void loop() {
  digitalWrite(13, HIGH);  //gửi tín hiệu 5V ra chân
  delay(1000);        // 1000ms
  digitalWrite(13, LOW);
  delay(1000);
}
