// Barramento Tx e Rx Arduino 1

boolean x = 0;

void setup() {
  Serial.begin(9600); //inicializa porta Serial
  while (!Serial){} //Enquanto o não se inicia a comunicação serial fica parado
  pinMode(6, INPUT_PULLUP); //Deixa o Pino 6 sempre com nível lógico 1 quando aberta
  pinMode(13, OUTPUT);
}

void loop(){
  if(digitalRead(6) == 0){
    x = !x; //x igual ao seu inverso 
  }
  digitalWrite(13,x);

  delay(1000); //tempo para que o botão seja apertado

  Serial.print(x); //imprime na serial o valor da variável x

}
