/*
Indicar qual de três números racionais está mais próximo do número 10.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num1, num2, num3, menorDiferenca;

  printf("Digite um numero racional:\n");
  scanf("%f", &num1);
  printf("Digite outro numero racional:\n");
  scanf("%f", &num2);
  printf("Digite outro numero racional:\n");
  scanf("%f", &num3);

  menorDiferenca = fabs(10 - num1);

  if (menorDiferenca > (abs(10 - num2))) {
    menorDiferenca = fabs(10 - num2);
    printf("O numero racional mais proximo do 10 eh: %f\n", num2);
    return 0;
  }
  if (menorDiferenca > (abs(10 - num3))) {
    menorDiferenca = fabs(10 - num3);
    printf("O numero racional mais proximo do 10 eh: %f\n", num3);
    return 0;
  }

  printf("O numero racional mais proximo do 10 eh: %f\n", num1);

  return 0;
}