// Calcule a área de um polígono regular de N lados.

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  int numeroLados;
  float apotema, tamanhoLado, area;

  printf("Vamos calcular a area de um poligono de n lados.\nDigite o numero de lados que deseja:\n");
  scanf("%i", &numeroLados);
  printf("Digite a menor distancia do centro do poligono ate um de seus lados:\n");
  scanf("%f", &apotema);
  printf("Digite a distancia de um dos lados do poligono:\n");
  scanf("%f", &tamanhoLado);

  area = (numeroLados * apotema * tamanhoLado) / 2;

  printf("A area do poligono de %i lados, apotema de %.3f, e lado de %.3f eh %.3f", numeroLados, apotema, tamanhoLado, area);

  return 0;
}