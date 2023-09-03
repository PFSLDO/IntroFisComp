// Dado os pontos P1 e P2, e sabendo que por eles passa uma linha reta, calcule a inclinação e ponto de corte do eixo das ordenadas(nota: um ponto no plano cartesiano é constituído de 2 variáveis).

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float P1[2], P2[2], inclinacao, pontoDeCorte[2], coeficienteLinear;

  printf("Insira das 2 coordenadas do primeiro ponto, separadas por uma virgula\n");
  scanf("%f, %f", &P1[0], &P1[1]);
  printf("Insira das 2 coordenadas do segundo ponto, separadas por uma virgula\n");
  scanf("%f, %f", &P2[0], &P2[1]);

  if (P1[1] == P2[1] || P1[0] == P2[0]) { //evitar divisao por 0
    inclinacao = 0;
  }
  else {
    inclinacao = (P2[1] - P1[1]) / (P2[0] - P1[0]);
  }

  coeficienteLinear = P1[1] - (inclinacao * P1[0]); //b = y - a*x

  //reta corta o eixo y quando x = 0
  pontoDeCorte[0] = 0;
  pontoDeCorte[1] = coeficienteLinear;

  printf("A inclinacao da reta eh %.3f e o ponto de corte do eixo das ordenadas eh (%.3f, %.3f)", inclinacao, pontoDeCorte[0], pontoDeCorte[1]);

  return 0;
}