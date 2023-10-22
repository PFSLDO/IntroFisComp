// Verificar se um número é perfeito (iguais a soma de seus divisores, ex: 6=1+2+3).
//Usando esse resultado, achar os primeiros N números perfeitos

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

bool ehPerfeito(int num) {
  int somaDivisores = 0;
  if(num == 0) return false;

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
  int max = 0;
  
  printf("Vamos verificar quais numeros entre 0 e N sao perfeito. Digite ate onde devemos calcular:\n");
  scanf("%i", &max);
  
  printf("Os numeros perfeitos entre 0 e %i sao:\n", max);

  for (int i = 0; i < max; i++) {
    if (ehPerfeito(i)) {
      printf("%i ", i);
    }
  }

  return 0;
}