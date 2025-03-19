#define r 8
#define g  9
#define b  10
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Cor Branca 
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(2000);
Serial.println(r);
Serial.println(g);
Serial.println(b);
  //Cor Azul 
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, HIGH);
  delay(2000);

  //Cor Verde 
  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  delay(2000);

  //Cor Vermelho 
  digitalWrite(r, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  delay(2000);

  //Cor Amarelo
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, LOW);
  delay(2000);

  //Cor Magenta
  digitalWrite(r, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(b, HIGH);
  delay(2000);

//Cor Ciano 
  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(2000);
}

