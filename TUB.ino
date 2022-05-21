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

  if (voltagem < 3.058){
    Serial.println("Equipamento: 1000 NTU");
  }
  
  else if (voltagem > 4.24){
    Serial.println("Equipamento: 0 NTU");
  }
  
  else{
  sensor = ((voltagem - 4,2331) / - 0.0012);
  Serial.print("Equipamento: ");
  Serial.print(sensor);
  Serial.println(" NTU");
  }
  
  delay(1000);
}