float ntu;
float voltagem;
float sensor;

void setup() {
  Serial.begin(9600);

}

void loop() {
  ntu = analogRead(A0);
  voltagem = (ntu / 1023) * 5;

  Serial.print("Sinal analógico =   ");
  Serial.println(ntu);
  Serial.print("Tensão =   ");
  Serial.println(voltagem);
  //delay(1000);

  if (voltagem < 2.5) {
    Serial.println("Equipamento =   1000");
  }

  else if (voltagem > 4.2) {
    Serial.println("Equipamento =   0");
  }

  else {
    // sensor = (-1120.4 * (voltagem * voltagem)) + (5742.3 * voltagem) - 4353.8;
    sensor = (-4.2331 + voltagem) / -0.0012;
    Serial.print("Equipamento =   ");
    Serial.println(sensor);
  }

  delay(1000);
}
