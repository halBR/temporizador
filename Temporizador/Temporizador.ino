int status_botao=5;


//Porta ligada ao pino IN1 do modulo
int porta_rele1 = 7;
//Porta ligada ao pino IN2 do modulo
int porta_rele2 = 8;

void setup() {
  pinMode(9, INPUT_PULLUP);
  pinMode(2, OUTPUT);

  //Define pinos para o rele como saida
  pinMode(porta_rele1, OUTPUT); 
  pinMode(porta_rele2, OUTPUT);

  digitalWrite(porta_rele1, HIGH);  //Liga rele 1
  digitalWrite(porta_rele2, HIGH);  //Liga rele 1

  //Serial.begin(9600);
  digitalWrite(2, HIGH);
  delay(20);
  digitalWrite(2, LOW);
  delay(20);
  digitalWrite(2, HIGH);
  delay(20);
  digitalWrite(2, LOW);
  delay(20);
  digitalWrite(2, HIGH);
  delay(20);
  digitalWrite(2, LOW);
  delay(20);
  digitalWrite(2, HIGH);
  delay(20);
  digitalWrite(2, LOW);

}

void loop() {
  delay(1000);
  status_botao=digitalRead(9);
  //Serial.println(status_botao);
  if (status_botao == 0) {
    //Serial.println("Aguardando 5s");
    digitalWrite(2, HIGH);
    delay(150);
    digitalWrite(2, LOW);
    delay(150);
    digitalWrite(2, HIGH);
    delay(150);
    digitalWrite(2, LOW);
    delay(150);
    digitalWrite(2, HIGH);
    
    digitalWrite(porta_rele1, LOW);  //Liga rele 1
    digitalWrite(porta_rele2, LOW); //Desliga rele 2
    
    delay(720000);
    digitalWrite(2, LOW);
    delay(250);
    digitalWrite(2, HIGH);
    delay(250);
    digitalWrite(2, LOW);
    delay(250);
    digitalWrite(2, HIGH);
    delay(250);
    digitalWrite(2, LOW);
    delay(50);
    digitalWrite(porta_rele1, HIGH);  //Liga rele 1
    digitalWrite(porta_rele2, HIGH); //Desliga rele 2

    //Serial.println("Continuando");
  }

}
