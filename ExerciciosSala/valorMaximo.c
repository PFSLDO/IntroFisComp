//Soma das componentes de um vetor

#include "stdio.h"
#include "math.h"

#define N 10
//----------------------------------------------------------------------

int main() {
  int n, max, data[N];
  
  for (n=0; n<N; n++) {
    scanf("%d", &data[n]);
  }

  max = -100;

  for (n=0; n<N; n++) {
    if(data[n] > max) {
      max = data[n];
    }
  }

  printf("O valor maximo eh %d\n", max);

  return 0;
}