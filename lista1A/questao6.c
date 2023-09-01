// Dado um ângulo em graus, minutos e segundos (exemplo: 31◦12'43''), converta ele para radianos

#include "stdio.h"
#include "math.h"
#define PI 3.141592653

int main() {
  float graus, minutos, segundos, grausDecimais, anguloRad;

  printf("Vamos converter valores em graus, minutos e segundos para radianos.\nDigite o valor dos graus:\n");
  scanf("%f", &graus);
  printf("Digite o valor dos minutos:\n");
  scanf("%f", &minutos);
  printf("Digite o valor dos segundos:\n");
  scanf("%f", &segundos);

  grausDecimais = graus + (minutos + (segundos/60))/60;
  anguloRad = PI * grausDecimais / 180;

  printf("O valor do grau decimal %f em radianos é: %f", grausDecimais, anguloRad);

  return 0;
}