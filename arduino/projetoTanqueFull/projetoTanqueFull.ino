//conversor Analógico digital;
int tanque = 0;

void void setup()
{
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT); //vazio
  pinMode(4, OUTPUT); // 1/4
  pinMode(5, OUTPUT); //metade
  pinMode(6, OUTPUT); // 3/4
  pinMode(7, OUTPUT); // Cheio
  Serial.begin(9600);
}