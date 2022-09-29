float sinalAnalogico;                           //Correponde ao sinal analógico
float tensao;                                   //Correponde a tensão elétrica
float sensorNTU;                                //Correponde a turbidez

void setup() {
  Serial.begin(9600);                           //Inicia o monitor serial 
}

void loop() {
  sinalAnalogico = analogRead(A0);              //Efetua a leitura do sinal analógico
  tensao = (sinalAnalogico/1023)*5;             //Realiza a conversão de sinal analógico para tensão elétrica
  
  Serial.print("Sinal analógico = ");   
  Serial.println(sinalAnalogico);               //Mostra no monitor serial o valor correspondente ao sinal analógico
  Serial.print("Tensão = ");
  Serial.println(tensao);                       //Mostra no monitor serial o valor correspondente a tensão elétrica
  sensorNTU = (-2.5768 + tensao) / -0.0026;
  Serial.print("Equipamento = ");
  Serial.println(sensorNTU);                    //Mostra no monitor serial o valor correspondente a turbidez
  
  delay(600);                                   //Espera 600 milisegundos para retornar ao inicio (void loop)
}
