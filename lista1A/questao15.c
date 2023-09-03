/*
Escreva um programa que calcule a expansão linear como função da temperatura. A equação
para expansão linear, l, é l = l0[1 + α(Tf − T0)]
onde l0 é o comprimento do material à temperatura T0, α é o coeficiente de expansão linear, Tf é a
temperatura final. Considere uma barra de aço à temperatura inicial de 0◦C e à temperatura final
de 40◦C. O coeficiente de expansão térmica do aço nessa faixa de temperatura é 10.5×10−6 ◦C−1.
O programa deve imprimir o novo comprimento e o incremento porcentual.
*/

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float tInicial = 0, tFinal = 40, coefExpTerm = 0.0000105, compInicial, compFinal;

  printf("Vamos calcular a expansao linear como funcao da temperatura, com uma variacao de 40 graus, e considerando o coeficiente de expansao terminca do aco.\nDigite o valor do comprimento inicial desejado:\n");
  scanf("%f", &compInicial);

  compFinal = compInicial*(1 + coefExpTerm*(tFinal - tInicial));
  printf("O valor do comprimento final eh: %f", compFinal);

  return 0;
}