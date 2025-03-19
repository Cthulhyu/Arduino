#include <Ultrasonic.h>
  short trig = 5;
  short echo = 6;
  float distancia = 0;
  Ultrasonic sonic(trig, echo);
  short azul = 7;
  short verde = 8;
  short vermelho = 9;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  distancia = sonic.read(CM);
  Serial.print("Distancia = \n");
  Serial.println(distancia);
  if (distancia < 10.0){ 
    Vermelho();
    delay(10);
  }
  else if (distancia > 10.0 && distancia < 20.0){
    Verde();
    delay(10);
  }
  else if (distancia > 20.0){
    Azul();
    delay(10);
  }
delay(500);
}
void Vermelho() {
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, HIGH);
  delay(100);
  


}
void Verde() {
  digitalWrite(vermelho, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  delay(1000);
}
void Azul() {
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(azul, HIGH);
  delay(1000);
}

