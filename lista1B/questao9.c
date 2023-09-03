/*
 Calcular as seguintes funções, tendo atenção aos seus domínios:
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num, eq1, eq2, eq3, eq4, eq5;

  printf("Digite um numero:\n");
  scanf("%f", &num);

  if (num > 0) {
    printf("O numero eh maior que 0, entao podemos calcular as seguintes:\n");

    eq1 = log(num)/num;
    printf("eq1 = %f\n", eq1);

    if (num < 1.5) {
      eq2 = 1 / sqrt(-2 * num + 3);
      printf("eq2 = %f\n", eq2);
    }

    if (num != 1) {
      eq3 = log(pow(num, 2) - 1);
      eq4 = log(1 - pow(num, -2));
      printf("eq3 = %f\neq4 = %f\n", eq3, eq4);
    }

    if (num > 3) {
      eq5 = (sqrt(num - 1)) / (pow(num, 2) - 5 * num + 6);
      printf("eq5 = % f\n", eq5);
    }
  }
  else if (num == 0) {
    printf("Como o numero eh 0, podemos calcular apenas as equacoes:\n");

    eq2 = 1 / sqrt(-2 * num + 3);
    eq4 = log(1 - pow(num,-2));
    printf("eq2 = %f\neq4 = %f\n", eq2, eq4);
  }
  else {
    printf("Como o numero eh negativo, podemos calcular apenas as seguintes equacoes:\n");

    eq2 = 1 / sqrt(-2 * num + 3);
    printf("eq2 = %f\n", eq2);

    if (num != -1) {
      eq3 = log(pow(num, 2) - 1);
      eq4 = log(1 - pow(num, -2));
      printf("eq3 = %f\neq4 = %f\n", eq3, eq4);
    }
  }

  return 0;
}