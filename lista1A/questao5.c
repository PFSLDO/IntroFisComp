// Para pequenos valores de x o sin x pode ser aproximado por: sin x ≈ x onde x está em radianos.Escreva um programa que calcule o valor do sin para 5◦, 10◦ e 20◦. Compare com os valores devolvidos pela função seno.

#include "stdio.h"
#include "math.h"
#define PI 3.141592653

//------------------------------------------------------------------------------------------------------------------------------

float calculaAnguloRad(int anguloGraus) {
  float anguloRad;

  return anguloRad = PI * anguloGraus / 180;
}

int main() {
  int anguloGraus = 5;
  float anguloRad, senoRad;

  anguloRad = calculaAnguloRad(anguloGraus);
  senoRad = sin(anguloRad);
  printf("O valor do seno de %i graus (%.3f rad) eh: %.3f\n", anguloGraus, anguloRad, senoRad);

  anguloGraus = 10;
  anguloRad = calculaAnguloRad(anguloGraus);
  senoRad = sin(anguloRad);
  printf("O valor do seno de %i graus (%.3f rad) eh: %.3f\n", anguloGraus, anguloRad, senoRad);

  anguloGraus = 20;
  anguloRad = calculaAnguloRad(anguloGraus);
  senoRad = sin(anguloRad);
  printf("O valor do seno de %i graus (%.3f rad) eh: %.3f\n", anguloGraus, anguloRad, senoRad);

  printf("Podemos verificar que para anguos pequenos, a aproximacao do seno de um angulo para apenas o angulo, em radianos, é bem razoavel\n");

  return 0;
}