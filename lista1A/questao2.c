// Faça um programa que calcule a raiz da equação linear a + bx = 0, com a e b escolhidos durante a programação

#include "stdio.h"
#include "math.h"

int main() {
  int a = 50;
  int b = 5;
  float raiz = -(a/b);

  printf("A raiz da equação linear a + bx = 0, com a = %i e b = %i é: %.2f\n", a, b, raiz);

  return 0;
}