/*
 Modifique o programa anterior para que, dado x, verifique qual das funções retorna um valor
maior e^x, 2^x ou 4^x
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define EULER 2.71828182845904523

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num, exp, base2, base4;

  printf("Digite um numero:\n");
  scanf("%f", &num);

  exp = pow(EULER, num);
  base2 = pow(2, num);
  base4 = pow(4, num);

  if (exp>base2 && exp> base4) {
    printf("O maior numero eh o %f", exp);
  }
  else {
    if (base2>exp && base2> base4) {
      printf("O maior numero eh o %f", base2);
    }
    else {
      printf("O maior numero eh o %f", base4);
    }
  }

  return 0;
}