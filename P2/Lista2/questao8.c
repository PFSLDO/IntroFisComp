// Calcular a soma dos números pares e dos números ímpares contidos em [1,N]

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

bool ehPar(int value) {
  if(value%2 == 0) {
    return true;
  }
  return false;
}

int main() {
  int num, somaImpar = 0, somaPar = 0;
 
  printf("Digite um numero:\n");
  scanf("%i", &num);

  for(int i=0; i<=num; i++) {
    if (ehPar(i)) {
      somaPar += i;
    }
    else {
      somaImpar += i;
    }
  }

  printf("Soma Pares = %i\n", somaPar);
  printf("Soma Impares = %i\n", somaImpar);

  return 0;
}