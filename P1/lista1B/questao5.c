/*
 Indique o maior de 3 números.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num1, num2, num3;

  printf("Digite o primeiro numero:\n");
  scanf("%f", &num1);
  printf("Digite o segundo numero:\n");
  scanf("%f", &num2);
  printf("Digite o terceiro numero:\n");
  scanf("%f", &num3);

  if (num1>num2 && num1>num3) {
    printf("O maior numero eh o %f", num1);
  }
  else {
    if (num2>num1 && num2>num3) {
      printf("O maior numero eh o %f", num2);
    }
    else {
      printf("O maior numero eh o %f", num3);
    }
  }

  return 0;
}