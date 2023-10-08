/*
Indique o maior de 2 números
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num1, num2;

  printf("Digite o primeiro numero:\n");
  scanf("%f", &num1);
  printf("Digite o segundo numero:\n");
  scanf("%f", &num2);

  if (num1 > num2) {
    printf("%f eh maior que %f", num1, num2);
  }
  else if (num2 > num1) {
    printf("%f eh maior que %f", num2, num1);
  }
  else {
    printf("%f e %f sao iguais", num1, num2);
  }
  
  return 0;
}