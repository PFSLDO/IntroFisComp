// Calcular a soma dos primeiros 100 números inteiros

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int soma = 0;

  for (int i=1; i<=100; i++) {
    soma += i;
  }

  printf("soma = %i\n", soma);

  return 0;
}