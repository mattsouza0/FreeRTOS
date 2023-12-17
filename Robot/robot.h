#ifndef ROBOT_H
#define ROBOT_H

#include "Arduino.h"
#include "Arduino_FreeRTOS.h"

class Robot {
public:
  Robot(int ena, int in1, int in2, int enb, int in3, int in4);

  void paraFrente(int pwm);
  void paraTras(int pwm);
  void paraEsquerda(int pwm);
  void paraDireita(int pwm);

private:
  int ENA; 
  int IN1; 
  int IN2; 
  int ENB; 
  int IN3;
  int IN4;
};

#endif