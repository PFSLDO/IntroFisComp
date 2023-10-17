// Calcular o produto n*m através de uma soma de m por m, n vezes (m,n inteiros)

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int m, n, soma = 0;

  printf("Digite um numero para ser somado\n");
  scanf("%i", &m);
  printf("Digite a quantidade de vezes que ele deve ser somado\n");
  scanf("%i", &n);

  printf("%i x %i:\n", m, n);

  for(int i=1; i<=n; i++) {
    soma += m;
  }

  printf("soma = %i\n", soma);

  return 0;
}