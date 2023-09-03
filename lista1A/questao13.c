//  Calcular log(1+x) e log1p(x) comparar os resultados dessas duas funções, imprimindo com % .15e e observar que para pequenos valores de x em módulo muito menores que 1.0e-1 essas funções retornam valores diferentes.

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float valorX, logArgIncremento, logFuncIncremento;

  printf("Digite o valor de x:\n");
  scanf("%f", &valorX);

  logArgIncremento = log(valorX + 1);
  logFuncIncremento = log1p(valorX);

  printf("O log de (%f + 1) eh %.15f e o log pelo incremento dado pela funcao eh %.15f\n", valorX, logArgIncremento, logFuncIncremento);

  return 0;
}