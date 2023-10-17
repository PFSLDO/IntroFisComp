// Calcular m^n através de n multiplicações sucessivas de m por m (m,n inteiros)

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int m, n, mult = 0;

  printf("Digite um numero para ser multiplicado\n");
  scanf("%i", &m);
  printf("Digite a quantidade de vezes que ele deve ser multiplicado\n");
  scanf("%i", &n);

  printf("%i^%i:\n", m, n);
  mult = m;

  for(int i=1; i<n; i++) {
    mult *= m;
  }

  printf("mult = %i\n", mult);

  return 0;
}