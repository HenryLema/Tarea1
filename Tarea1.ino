//Estudiante: Henry Lema
//Asignatura: Sistemas Embebidos

const int led1=8; // Asignacion de puertos
const int led2=9;
const int led3=10;
const int led4=11;
const int led5=12;
const int led6=13;

const int btn1=6; // asignacion de pulsadores
const int btn2=7;

int i=0;
int j=0;

void setup() {
  pinMode(led1,OUTPUT); // Salidas LEDS
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(btn1,INPUT); // Entradas de estado logico 5 o 0 voltios al arduino
  pinMode(btn2,INPUT);
  
}

void loop() {
if(digitalRead(btn1)==HIGH&&j<=8){// Condicion contador va incrementando hasta llegar a 8 con duracion de proceso 3 segundos
  
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(3000);
  j++;
  
  }
  else(digitalRead(btn1)==HIGH&&j>8);{ // Condicion se apagan los LEDS cuando sobre pasa el contador (j) a  8
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    }

  

if(digitalRead(btn2)==HIGH && i<10){//Si btn2 recibe 5 voltios el contador (i) va aumentando hasta ser menor que 10 y se prenden y se apgan en el orden solicitado 
  
  digitalWrite(led1,HIGH);
  digitalWrite(led6,HIGH);
  delay(300);
  digitalWrite(led1,LOW);
  digitalWrite(led6,LOW);
  delay(300);
  
  digitalWrite(led2,HIGH);
  digitalWrite(led5,HIGH);
  delay(300);
  digitalWrite(led2,LOW);
  digitalWrite(led5,LOW);
  delay(300);

  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(300);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(300);
    i++;
  }

}
