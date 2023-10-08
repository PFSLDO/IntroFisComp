/*
Verifique se um inteiro é par ou ímpar, utilizando a operação módulo.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int num;

  printf("Digite um numero inteiro:\n");
  scanf("%i", &num);

  if (num % 2 == 0) {
    printf("%i eh par", num);
  }
  else {
    printf("%i eh impar", num);
  }

  return 0;
}