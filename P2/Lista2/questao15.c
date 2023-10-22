// Calcular o Máximo Divisor Comum de dois números inteiros

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int mdc(int num1, int num2)
{
  if(num1%num2 == 0) {
    return num2;
  }
  else {
    return mdc(num2, num1%num2);
  }     
}

int main() {
  int num1, num2;
 
  printf("Vamos calcular o MDC entre dois numeros. Digite o primeiro:\n");
  scanf("%i", &num1);
  printf("Digite o segundo:\n");
  scanf("%i", &num2);

  printf("O maximo divisor comum entre %i e %i eh %i\n", num1, num2, mdc(num1, num2));

  return 0;
}