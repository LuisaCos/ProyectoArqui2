#include <Stepper.h>

#include <Servo.h>

int IN1 = 34;
int IN2 = 32;
Servo servo1;
Servo servo2;
Stepper motor (10, 32, 34);

void setup() {
  // put your setup code here, to run once:
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  servo1.attach (5);
  servo2.attach (4);
  motor.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (IN1, HIGH); //pin encendido
  digitalWrite (IN2, LOW); //pin apagado
  servo1.write(0);
  delay(1000);
  servo2.write(0);
  delay (2000);
   {
  servo1.write(0);
  delay(1000);
  servo1.write(30);
  delay(1000);
  }
  {
 servo2.write(0);
  delay(2000);
  servo2.write(90);
  delay(2000);
  }
}
