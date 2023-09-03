//  Faça um programa que calcule o deslocamento de um corpo ideal sabendo a massa (em kg), o tempo de percurso(em s), a sua velocidade inicial(em m / s) e a força aplicada sobre ele(constante, em N).

#include "stdio.h"
#include "math.h"

int main() {
  float massa, tPercurso, vInicial, forca, aceleracao, deslocamento;

  printf("Vamos calcular o deslocamento de um corpo ideal.\nDigite a massa dele, em kg:\n");
  scanf("%f", &massa);
  printf("Digite o tempo de percurso dele, em segundos:\n");
  scanf("%f", &tPercurso);
  printf("Digite o valor da velocidade inicial dele, m/s:\n");
  scanf("%f", &vInicial);
  printf("Digite o valor da forca atuando sobre ele, em N:\n");
  scanf("%f", &forca);

  aceleracao = forca/massa;
  deslocamento = (vInicial * tPercurso) + (aceleracao * pow(tPercurso,2)/2);

  printf("O deslocamento total do objeto foi de %f", deslocamento);

  return 0;
}