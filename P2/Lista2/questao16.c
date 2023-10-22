// Calcular o Mínimo Múltiplo Comum de dois números inteiros

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int mdc(int a, int b) {
  if(b == 0) {
    return a;
  }
  else {
    return mdc(b, a%b);
  }
}

int mmc(int a, int b) {
  int div;
  
  if (b == 0) {
    return a;
  } 
  else {
    div = (a*b)/(mdc(a,b));
  } 

  return (div); 
}      

int main() {
  int num1, num2;
 
  printf("Vamos calcular o MMC entre dois numeros. Digite o primeiro:\n");
  scanf("%i", &num1);
  printf("Digite o segundo:\n");
  scanf("%i", &num2);

  printf("O minimo divisor comum entre %i e %i eh %i\n", num1, num2, mmc(num1, num2));

  return 0;
}