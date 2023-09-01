// Faça um programa que receba a hora, minuto e segundo, converta e imprima essa informação para minutos e segundos transcorridos desde a meia noite(hora zero).

#include "stdio.h"
#include "math.h"

int main() {
  int hora, minuto, segundo;

  printf("Digite as horas:\n");
  scanf("%i", &hora);
  printf("Digite os minutos:\n");
  scanf("%i", &minuto);
  printf("Digite os segundos:\n");
  scanf("%i", &segundo);

  minuto = minuto + hora * 60;

  printf("Foram transcorridos %i minutos e %i segundos desde a meia noite", minuto, segundo);

  return 0;
}