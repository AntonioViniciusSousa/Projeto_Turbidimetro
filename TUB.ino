float ntu;
float voltagem;
float sensor;

void setup(){
    Serial.begin(9600);
}

void loop(){
    ntu = analogRead(A0);
    voltagem = (ntu/1023)*5;
  
  Serial.print("Sinal bruto: ");
  Serial.println(ntu);
  Serial.print("Sinal tratado: ");
  Serial.println(voltagem);
  delay(1000);

  if (voltagem < 2.5){
    Serial.println("Equipamento: 3000 NTU");
  }
  
  else if (voltagem > 4.2){
    Serial.println("Equipamento: 0 NTU");
  }
  
  else{
  sensor = (-1120.4 * (voltagem * voltagem)) + (5742.3 * voltagem) - 4353.8;
  Serial.print("Equipamento: ");
  Serial.print(sensor);
  Serial.println(" NTU");
  }
  
  delay(1000);
}