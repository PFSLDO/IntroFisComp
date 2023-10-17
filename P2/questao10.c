// Calcular o fatorial de um numero inteiro n

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int num, fatorial;
 
  printf("Digite um numero:\n");
  scanf("%i", &num);

  for(int i=num; i>0; i--) {
    fatorial *= i;
  }

  printf("Fatorial de %i = %i\n", num, fatorial);

  return 0;
}