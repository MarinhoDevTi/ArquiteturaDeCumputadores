// Codificador-Binário-Decimal 8 - 1 - L
// (Display) 7 Segmentos

boolean A = 0;
boolean B = 0;
boolean C = 0;
boolean D = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Sa
  pinMode(12,OUTPUT); //Sb
  pinMode(11,OUTPUT); //Sc 
  pinMode(10,OUTPUT); //Sd 
  pinMode(9,OUTPUT); //Se 
  pinMode(8,OUTPUT); //Sf
  pinMode(7,OUTPUT); //Sg 
  //pinMode(3,IMPUT);  //entrada D 
  //pinMode(4,IMPUT); //entrada C 
  //pinMode(5,IMPUT); //entrada B 
  //pinMode(6,IMPUT); //entrada A   

}

void loop() {
  // put your main code here, to run repeatedly:
  A = digitalRead(6);
  B = digitalRead(5);
  C = digitalRead(4);
  D = digitalRead(3);

  // Modulo L com 1111
if (A*B*C*D == 1){
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,0);
}

//MODULO um com 0001
if (!A * !B * !C * D == 1){
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,0);

}

//MODULO oito com 1000
if (A * !B * !C * !D  == 1){
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,1);

}

}






