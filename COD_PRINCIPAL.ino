#include <Servo.h>
//Definimos los sensores, servomotores y los pines a los que van conectados.
Servo dedo1,dedo2,dedo3

int servoPin1 =; //Pulgar
int servoPin2 =;//Indice
int servoPin3 =;//Anular

int flexPin1 =;//Pulgar
int flexPin2 =;//Indice
int flexPin3 =;//Anular

void setup() {
  // Asignamos a los servomoteres sus respectivos pines
dedo1.attach(servoPin1);//Pulgar
dedo2.attach(servoPin2);//Indice
dedo3.attach(servoPin3);//Anular

pinMode(servoPin1, OUTPUT);
pinMode(servoPin2, OUTPUT);
pinMode(servoPin3, OUTPUT);

pinMode(flexPin1,INPUT);
pinMode(flexPin1,INPUT);
pinMode(flexPin1,INPUT);
}

void loop() {
// Definimos las variables para que puedan leer la entrada analógica de los sensores
int flex1 = analogRead(flexPin1);
int flex2 = analogRead(flexPin2);
int flex3 = analogRead(flexPin3);


int pos1 = map(flex1,150 ,250 , 0, 180);
pos1 = constrain(pos1, 0, 180);
int pos2 = map(flex2, , , 0, 180);
pos2 = constrain(pos2, 0, 180);
int pos3 = map(flex3, , , 0, 180);
pos3 = constrain(pos3, 0, 180);

//Escribimos la información de las variables "pos" en los servomotores 
dedo1.write(pos1);
dedo2.write(pos2);
dedo3.write(pos3);
}
