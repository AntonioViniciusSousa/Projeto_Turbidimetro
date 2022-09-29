float ntu;
float voltagem;
float sensor;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  ntu = analogRead(A0);
  voltagem = (ntu/1023)*5;
  
  Serial.print("Sinal analógico =   ");
  Serial.println(ntu);
  Serial.print("Tensão =   ");
  Serial.println(voltagem);
  //delay(1000);

  // sensor = (-1120.4 * (voltagem * voltagem)) + (5742.3 * voltagem) - 4353.8;
  sensor = (-2.5768 + voltagem) / -0.0026;
  Serial.print("Equipamento =   ");
  Serial.println(sensor);
  
  delay(600);
}
