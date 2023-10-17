// Calcular a quantidade de números divisíveis por n no intervalo [N1,N2]

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

bool ehDivisivel(int value, int divider) {
  if(value%divider == 0) {
    return true;
  }
  return false;
}

int main() {
  int num1, num2, divisor, quantNumDiv = 0;
 
  printf("Digite um numero:\n");
  scanf("%i", &num1);
  printf("Digite outro numero:\n");
  scanf("%i", &num2);
  printf("Digite um numero para dividirmos:\n");
  scanf("%i", &divisor);

  for(int i=num1; i<=num2; i++) {
    if (ehDivisivel(i, divisor)) {
      quantNumDiv++;
    }
  }

  printf("Quantidade de numeros divisiveis por %i no intervalo [%i,%i] = %i\n", divisor, num1, num2, quantNumDiv);

  return 0;
}