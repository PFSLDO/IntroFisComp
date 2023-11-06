//Soma das componentes de um vetor

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"

//----------------------------------------------------------------------

int main() {
  srand(time(0)); //Usa o valor da hora atual, contada a partir de 01/01/1970 para gerar uma sequencia aleatoria (desde que demore mais de 1s para compilar)

  for (int i=0; i<100; i++) {
    printf("numero aleatorio: %d\n", rand());
  }

  for (int i=0; i<100; i++) {
    printf("%f\n", (double) rand()/RAND_MAX);
  }

  return 0;
}