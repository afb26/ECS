#include "mdfuncs.h"
#include <Arduino.h>

// TB6612
void forwardTB6612()
{
  Serial.println("Forward Function Activated");
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, HIGH);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, HIGH);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

void backwardTB6612()
{
  Serial.println("Backward Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, HIGH);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, HIGH);
  digitalWrite(MD3, HIGH);
}

void rightTB6612()
{
  Serial.println("Right Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, HIGH);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, HIGH);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

void leftTB6612()
{
  Serial.println("Left Function Activated");
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

void stopFuncTB6612()
{
  Serial.println("Stop Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

// L298N
void forwardL298N()
{
  Serial.println("Forward Function Activated");
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, HIGH);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, HIGH);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

void backwardL298N()
{
  Serial.println("Backward Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, HIGH);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, HIGH);
  digitalWrite(MD3, HIGH);
}

void rightL298N()
{
  Serial.println("Right Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, LOW);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, LOW);
  digitalWrite(MC1, HIGH);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, HIGH);
  digitalWrite(MD1, HIGH);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, HIGH);
}

void leftL298N()
{
  Serial.println("Left Function Activated");
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, HIGH);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, HIGH);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, LOW);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, LOW);
}

void stopFuncL298N()
{
  Serial.println("Stop Function Activated");
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MA3, LOW);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  digitalWrite(MB3, LOW);
  digitalWrite(MC1, LOW);
  digitalWrite(MC2, LOW);
  digitalWrite(MC3, LOW);
  digitalWrite(MD1, LOW);
  digitalWrite(MD2, LOW);
  digitalWrite(MD3, LOW);
}
