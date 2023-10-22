// Calcular o Mínimo Múltiplo Comum de dois números inteiros

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int mmc(int num1, int num2)
{
  while(num2 != 0) {
    int r = num1 % num2;
    num1 = num2;
    num2 = r;
  }

  return num1 * (num2 / num1);
}

int main() {
  int num1, num2;
 
  printf("Vamos calcular o MMC entre dois numeros. Digite o primeiro:\n");
  scanf("%i", &num1);
  printf("Digite o segundo:\n");
  scanf("%i", &num2);

  printf("O minimo divisor comum entre %i e %i eh %i\n", num1, num2, mmc(num1, num2));

  return 0;
}