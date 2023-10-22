// Um número de Armstrong é aquele que é igual a soma de seus dígitos elevados ao número total de dígitos.
// Liste os números de Armstrong contidos em um intervalo [N1,N2]

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
  int intervalo1 = 0, intervalo2 = 0;
  
  printf("Vamos verificar quais numeros em um intervalo sao numeros de Armstrong. Digite o primeiro extremo do intervalo:\n");
  scanf("%i", &intervalo1);
  printf("Digite o segundo extremo do intervalo:\n");
  scanf("%i", &intervalo2);
  
  printf("Os seguintes numeros sao de Armstrong: ");

  for (int i = intervalo1; i < intervalo2; i++) {
    if (ehNumeroArmstrong(i)) {
      printf("%i ", i);
    }
  }

  return 0;
}