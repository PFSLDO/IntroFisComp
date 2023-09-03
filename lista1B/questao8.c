/*
De acordo com a escolha do usuário, calcular exp(x) ou log(x) ou pow(x,2) ou pow(x,0.5) - sendo
log o logarítmo natural.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float num, calculoNum;
  int escolaCalculo;

  printf("Escolha qual conta realizar, digitando o numero correspondente:\n1) exp(x);\n2) log(x);\n3) x^2;\n4) x^0.5.\n");
  scanf("%i", &escolaCalculo);
  printf("Agora escolha seu x:\n");
  scanf("%f", &num);

  switch (escolaCalculo) {
    case 1:
      calculoNum = exp(num);
      printf("exp(%f) = %f\n", num, calculoNum);
      break;
    
    case 2:
      calculoNum = log(num);
      printf("log(%f) = %f\n", num, calculoNum);
      break;
   
    case 3:
      calculoNum = pow(num,2);
      printf("(%f)^2 = %f\n", num, calculoNum);
      break;

    case 4:
      calculoNum = pow(num,0.5);
      printf("(%f)^0.5 = %f\n", num, calculoNum);
      break;

    default:
      printf("Escolha uma opcao valida.\n");
      break;
  }

  return 0;
}