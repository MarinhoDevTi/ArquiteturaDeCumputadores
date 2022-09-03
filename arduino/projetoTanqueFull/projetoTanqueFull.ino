//conversor Analógico digital;
int tanque = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT); //vazio
  pinMode(4, OUTPUT); // 1/4
  pinMode(5, OUTPUT); //metade      //tanque < 255 and tanque > 2
  pinMode(6, OUTPUT); // 3/4
  pinMode(7, OUTPUT); // Cheio
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tanque = analogRead(A0); // Lê entrada analógica A0
  Serial.print(" - tanque: "); //Imprime texto
  Serial.println(tanque); // Imprime variável tanque no monitor 

  // Led vazio
  while (tanque < 4 ){
    digitalWrite(3,1); //Liga Led Vazio    
  } 
  digitalWrite(3,0)
  
  while (tanque > 4 and tanque <= 130) {
    digitalWrite(4,1);
  } 
  digitalWrite(4,0)

  while (tanque > 130 and tanque <= 260) {
    digitalWrite(4,1);
    digitalWrite(5,1);
  } 

  digitalWrite(4,0);
  digitalWrite(5,0);

  while (tanque > 260 and tanque <= 400) {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
  }

  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);

  while (tanque > 400 and tanque <= 560) {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
  } 

  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  
  while (tanque > 560 and tanque <= 680) {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
  } 

  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);   
  
  while (tanque > 680 and tanque <= 780) {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
  } 
  
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,0);

  while (tanque > 780 and tanque <= 1023) {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    
  }
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);

}