// conversor Analógico Digital;
int tanque = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);//vazio
  pinMode(4, OUTPUT);//1/4
  pinMode(5, OUTPUT);//metade
  pinMode(6, OUTPUT);//3/4
  pinMode(7, OUTPUT);//cheio
  Serial.begin(9600);
}
void loop()
{
  tanque = analogRead(A0); //Lê entrada analógica A0
  Serial.print(" - tanque: "); //Imprime texto
  Serial.println(tanque); //imprime variável tanque no monitor 
  // Led vazio
  if (tanque<127 and tanque>2){
    digitalWrite(3,1); //Liga LEd vaizio Laranja
  }else{digitalWrite(3,0); //Desliga Led metade Laranja
  }
  //Led 1/4
  if (tanque>=128){
    digitalWrite(4,1); // Liga Led 1/4 verde
  }else{digitalWrite(4,0); //Desliga Led metade verde
  }
  //Led 3/4
  if (tanque>=256){
    digitalWrite(5,1); //Liga Led metade verde
  }else{digitalWrite(5,0); //Desliga Led metade verde
  }
  //Led 3/4
  if (tanque>=384){
    digitalWrite(6,1); // Liga Led 3/4 verde
  }else{digitalWrite(6,0); // Desliga Led 3/4 verde
  }
  //Led cheio
  if (tanque>=512){
    digitalWrite(7,1); //Liga Led cheio verde
  }else{digitalWrite(7,0); // Desliga Led cheio verde}
  }
  //
  if (tanque>=640){
    digitalWrite(8,1); //Liga Led cheio verde
  }else{digitalWrite(8,0); // Desliga Led cheio verde}
  }
  //
  if (tanque>=768){
    digitalWrite(9,1); //Liga Led cheio verde
  }else{digitalWrite(9,0); // Desliga Led cheio verde}
  }
  //
  if (tanque>1021 and tanque<=1024){
    digitalWrite(10,1); //Liga Led cheio verde
  }else{digitalWrite(10,0); // Desliga Led cheio verde}
  }
}
