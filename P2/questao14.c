// Calcular os primeiros N números da sequência de Fibonacci (F0 = 0 e F1 = 1): Fn = Fn−1 + Fn−2

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

void ehPrimo (int value) {
  int resultado = 0;

  for (int i = 2; i <= value / 2; i++) {
    if (value % i == 0) {
       resultado++;
    }
  }
  if (resultado == 0) {
    printf("%i eh Primo\n", value);
    return;
  }
  
  printf("%i nao eh Primo\n", value);
}

int main() {
  int num = 0;
 
  printf("Digite um numero:\n");
  scanf("%i", &num);

  printf("Vamos agora calcular quais numeros entre [0,%i] sao primos\n", num);

  for (int i=2; i<num; i++) {
    ehPrimo(i);
  }

  return 0;
}