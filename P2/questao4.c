// Imprimir a tabuada do número n

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num;

  printf("Digite um numero para obter sua respectiva tabuada\n");
  scanf("%f", &num);

  printf("Tabuada do numero %f:\n", num);

  for(int i=1; i<=10; i++) {
    printf("%.2f x %i = %.2f\n", num, i, num*i);
  }

  return 0;
}