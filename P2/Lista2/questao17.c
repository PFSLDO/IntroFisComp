// Verificar se um número é perfeito (iguais a soma de seus divisores, ex: 6=1+2+3)

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

bool ehPerfeito(int num) {
  int somaDivisores = 0;

  for (int i = num-1; i > 0; i--) { //num-1: excluindo o proprio numero
    if(num%i == 0) {
       somaDivisores += i;
    }
  }

  if (num == somaDivisores) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int num = 0;
 
  printf("Vamos verificar se um numero eh perfeito. Digite um valor:\n");
  scanf("%i", &num);

  if (ehPerfeito(num)) {
    printf("%i eh um numero perfeito. Seu valor eh igual a soma de seus divisores\n", num);
  }
  else {
    printf("%i nao eh um numero perfeito. Seu valor nao eh igual a soma de seus divisores\n", num);
  }

  return 0;
}