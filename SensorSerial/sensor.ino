void setup() {
  Serial.begin(9600); //9600 là baud rate, có thể dùng 115200
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0; // công thức cho TMP36

  Serial.print("Nhiet do: ");
  Serial.print(temperatureC);
  Serial.println(" *C");

  delay(1000);
}
