// Calcule a área de um círculo, com o raio fornecidos pelo usuário.

#include "stdio.h"
#include "math.h"
#define PI 3.141592653

int main() {
  float raio, area;

  printf("Vamos calcular a area de um circulo.\nDigite o raio do mesmo:\n");
  scanf("%f", &raio);

  area = PI * pow(raio, 2);

  printf("A area de um circulo com raio %f eh: %f", raio, area);

  return 0;
}