//Soma das componentes de um vetor

#include "stdio.h"
#include "math.h"

//----------------------------------------------------------------------

int main() {
  int x[4] = {1,2,3,4}, soma = 0;

  for(int i=0; i<4; i++) {
    soma += x[i];
  }

  printf("A soma das componentes eh %d\n", soma);

  return 0;
}