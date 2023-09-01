//Fa�a um programa que calcule a �rea de um tri�ngulo equil�tero, dado o lado (ou seja, escolhido por voc� enquanto programador(a)).

#include "stdio.h"
#include "math.h"

int main() {
  int ladoTriang = 3;
  float area = (sqrt(3)/4) * pow(ladoTriang, 2);

  printf("A área do triângulo equilátero de lado %i é: %.3f\n", ladoTriang, area);

  return 0;
}