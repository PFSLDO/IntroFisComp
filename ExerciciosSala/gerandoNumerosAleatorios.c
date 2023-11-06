//Soma das componentes de um vetor

#include "stdio.h"
#include "math.h"
#include "stdlib.h"

//----------------------------------------------------------------------

int main() {
  srand(214890); //Muda o primeiro valor que gera a sequencia pseudo aleatoria

  for (int i=0; i<100; i++) {
    printf("numero aleatorio: %d\n", rand());
  }

  for (int i=0; i<100; i++) {
    printf("%f\n", (double) rand()/RAND_MAX);
  }

  return 0;
}