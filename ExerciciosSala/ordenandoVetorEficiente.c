//Soma das componentes de um vetor

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"

#define N 20
//----------------------------------------------------------------------

int main() {
  srand(time(0));

  int data[N];

  //gerando numeros aleatorios
  for (int i=0; i<N; i++) {
    data[i] = rand()%N + 1;
    printf("%d ", data[i]);
  }
  
  //Organizando por ordem crescente
  for (int j=N-1; j>0; j--) {
    for (int i=0; i<N-1; i++) {
      if(data[i]>data[i+1]) {
        int temp = data[i];
        data[i] = data[i+1];
        data[i+1] = temp;
      }
    }
  }

  //Mostrando a saida
  printf("\n");

  for (int i=0; i<N; i++) {
    printf("%d ", data[i]);
  }

  return 0;
}