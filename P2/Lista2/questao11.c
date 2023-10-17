// Verificar se um número inteiro é primo (usar operação %)

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

void ehPrimo (int value) {
  int resultado = 0;

  for (int i = 2; i <= value / 2; i++) {
    if (value % i == 0) {
       resultado++;
    }
  }
  if (resultado == 0) {
    printf("eh Primo\n");
    return;
  }
  
  printf("nao eh Primo\n");
}

int main() {
  int num = 0;
 
  printf("Digite um numero:\n");
  scanf("%i", &num);

  ehPrimo(num);

  return 0;
}