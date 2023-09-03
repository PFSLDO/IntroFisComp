/*
Calcule a transformação de graus Fahrenheit para Celsius e vice-versa, sendo que tanto o valor
da temperatura a ser convertida quanto a escolha do sentido da conversão devem ser feitas pelo
usuário. A relação entre as temperaturas em graus Fahrenheit TF.
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float temp1, temp2;
  int fahrParaGraus;

  printf("Digite 1 se você quiser transformar uma temperatira de Fahrenheit para Celsius, e 0 se quiser o inverso:\n");
  scanf("%i", &fahrParaGraus); //como nao existe uma forma direta de ler um bool, vamos usar um int
  printf("Agora digite o valor da temperatura a ser convertida:\n");
  scanf("%f", &temp1);

  if (fahrParaGraus) {
    temp2 = (temp1 - 32) * 5 / 9;
  }
  else {
    temp2 = temp1 * 9 / 5 + 32;
  }

  printf("A temperatura convertida eh %f", temp2);

  return 0;
}