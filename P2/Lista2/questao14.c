// Calcular os primeiros N números da sequência de Fibonacci (F0 = 0 e F1 = 1): Fn = Fn−1 + Fn−2

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int n, f0 = 0, f1 = 1, f;
 
  printf("Até qual valor da sequencia de Fibonacci voce deseja calcular?\n");
  scanf("%i", &n);
  printf("%i, %i", f0, f1);

  for (int i=2; i<n; i++) {
    f = f0 + f1;
    printf(", %i", f);
    f0 = f1;
    f1 = f;
  }

  return 0;
}