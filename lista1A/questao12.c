//  Calcule o valor do seno, do cosseno e da tangente de um ângulo (fornecido em graus).

#include "stdio.h"
#include "math.h"
#define PI 3.141592653

float calculaAnguloRad(int anguloGraus) {
  float anguloRad;

  return anguloRad = PI * anguloGraus / 180;
}

int main() {
  float anguloGraus, anguloRad, seno, cosseno, tag;

  printf("Vamos calcular o seno, cosseno e tangente de um angulo.\nDigite ele em graus:\n");
  scanf("%f", &anguloGraus);

  anguloRad = calculaAnguloRad(anguloGraus);
  seno = sin(anguloRad);
  cosseno = cos(anguloRad);
  tag = tan(anguloRad);

  printf("O valor do seno eh %f, do cosseno eh %f e da tangente eh %f, para o angulo de %f graus", seno, cosseno, tag, anguloGraus);

  return 0;
}