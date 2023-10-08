/*
Verifique se um inteiro é um quadrado perfeito.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int num, raizNum;

  printf("Digite um numero positivo para verificar se eh um quadrado perfeito:\n");
  scanf("%i", &num);

  raizNum = sqrt(num);

  if (raizNum*raizNum == num) {
    printf("O numero %i eh um quadrado perfeito.\n", num);
  }
  else {
    printf("O numero %i nao eh um quadrado perfeito.\n", num);
  }

  return 0;
}