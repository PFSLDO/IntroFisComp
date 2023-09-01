// Calcule o valor de logB(x), com B e x escolhidos pelo usuário.

#include "stdio.h"
#include "math.h"

int main() {
  float x, base, logX;

  printf("Vamos calcular o log de um número\nDigite o valor do logaritmando:\n");
  scanf("%f", &x);
  printf("Digite o valor da base\n");
  scanf("%f", &base);

  logX = log(x) / log(base); //A funcao log desta biblioteca nao permite escolhermos a base, portanto precisamos fazer essa divisao

  printf("O valor do log de %f na base %f é: %f", x, base, logX);

  return 0;
}