// Calcular a soma dos digitos de um dado inteiro n (dica: observe o resultado das seguintes operações inteiras: n%10 e n/10)

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() { 
  int num = 0, soma = 0;
  
  printf("Vamos calcular a soma dos digitos de um numero inteiro. Digite qual numero devemos realizar a soma:\n");
  scanf("%i", &num);

  while (num != 0) {
    soma += num%10;
    num = (num - num%10)/10;
  }

  printf("A soma dos digitos do numero eh %i\n", soma);

  return 0;
}