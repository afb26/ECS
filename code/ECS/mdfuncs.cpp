/*

Motor Driver Functions Main File
Copyright (C) 2023 Alex Blackman
Available: https://github.com/afb26/ECS

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

#include "mdfuncs.h"
#include <Arduino.h>

#define MA1 10 // IN1A
#define MA2 11 // IN2A
#define MA3 12 // PWMA

#define MB1 13 // IN1B
#define MB2 14 // IN2B
#define MB3 21 // PWMB

#define MC1 43 // IN1C
#define MC2 44 // IN2C
#define MC3 42 // PWMC

#define MD1 41 // IN1D
#define MD2 40 // IN2D
#define MD3 30 // PWMD

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