// Declaramos variables de los pines analógicos
int flexPin1 = A5;
int flexPin2 = A3;
int flexPin3 = A1;

void setup() {
  //Definimos los pines usados como pines de entrada
pinMode(flexPin1, INPUT);
pinMode(flexPin2, INPUT);
pinMode(flexPin3, INPUT);

//Inicia el monitor serie para mostrar los resultados
Serial.begin(9600);
}

void loop() {
  // Definicmos las variables que leeran las entradas analógicas del sensor
int flex1 = analogRead(flexPin1);
int flex2 = analogRead(flexPin2);
int flex3 = analogRead(flexPin3);

//Mostramos en pantalla los valores medidos por los sensores
Serial.print(flex1);
Serial.print(" ");
Serial.print(flex2);
Serial.print(" ");
Serial.print(flex3);
Serial.print("    ");

delay(2000);
}
