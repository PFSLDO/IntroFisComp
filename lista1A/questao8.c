// Escreva um programa que calcule o fator relativista para uma velocidade v, onde c = 299792458 m/s.

#include "stdio.h"
#include "math.h"
#define C 299792458

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float velocidade, fator;

  printf("Vamos calcular o fator relativista para uma velocidade v, onde c = 299792458 m/s.\nDigite o valor da velocidade desejado, em m/s\n");
  scanf("%f", &velocidade);

  fator = 1 / sqrt(1 - pow((velocidade/C), 2));

  printf("O valor do fator para a velocidade de %f é: %f", velocidade, fator);

  return 0;
}