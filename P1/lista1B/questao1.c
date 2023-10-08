/*
Leia um inteiro do usuário e verifique se ele é positivo ou negativo
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num;

  printf("Digite um numero:\n");
  scanf("%f", &num);

  if (num > 0) {
    printf("%f eh positivo", num);
  }
  else if (num < 0) {
    printf("%f eh negativo", num);
  }
  else {
    printf("%f eh 0, nem positivo, nem negativo", num);
  }
  
  return 0;
}