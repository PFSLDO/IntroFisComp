// Um número de Armstrong é aquele que é igual a soma de seus dígitos elevados ao número total de dígitos. Verifique se é um dado inteiro é um número de Armstrong

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

bool ehNumeroArmstrong(int num) {
  int digitos = 0, soma = 0, copiaNum = num;

  while (copiaNum != 0) {
    copiaNum = (copiaNum - copiaNum%10)/10;
    digitos++;
  }
  copiaNum = num;
  
  while (copiaNum != 0) {
    soma += pow(copiaNum%10, digitos);
    copiaNum = (copiaNum - copiaNum%10)/10;
  }

  if (num == soma) {
    return true;
  }
  else {
    return false;
  }
}

int main() { 
  int num = 0;
  
  printf("Vamos verificar se um numero inteiro eh um numero de Armstrong. Digite o numero:\n");
  scanf("%i", &num);
  
  if (ehNumeroArmstrong(num)) {
    printf("%i eh um numero de Armstrong\n", num);
  }
  else {
    printf("%i nao eh um numero de Armstrong\n", num);
  }

  return 0;
}