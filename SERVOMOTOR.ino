#include <Servo.h>

Servo servoMotor;
void setup() { 
Serial.begin(9600);
servoMotor.attach(9);
}

void loop() {
servoMotor.write(0);
delay(1000);
}
