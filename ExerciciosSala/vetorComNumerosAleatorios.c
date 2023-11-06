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

  for (int i=0; i<N; i++) {
    data[i] = rand()%N + 1;
  }

  for (int i=0; i<N; i++) {
    printf("%d\n", data[i]);
  }

  return 0;
}