/*
 Calcular as seguintes funções, tendo atenção aos seus domínios:
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------
float num;

float eq1() {
  if (num > 0) {
    float eq1 = log(num) / num;
    printf("eq1 = %f\n", eq1);
  }
}

float eq2() {
  if (num < 1.5) {
    float eq2 = 1 / sqrt(-2 * num + 3);
    printf("eq2 = %f\n", eq2);
  }
}

float eq3() {
  if (abs(num) != 1 && num != 0) {
    float eq3 = log(pow(num, 2) - 1);
    printf("eq3 = %f\n", eq3);
  } 
}

float eq4() {
  if (abs(num) != 1) {

  }
  float eq4 = log(1 - pow(num, -2));
  printf("eq4 = %f\n", eq4);
}

float eq5() {
  if (num > 3) {
    float eq5 = (sqrt(num - 1)) / (pow(num, 2) - 5 * num + 6);
    printf("eq5 = %f\n", eq5);
  }
}

int main() {
  printf("Digite um numero:\n");
  scanf("%f", &num);

  eq1();
  eq2();
  eq3();
  eq4();
  eq5();

  return 0;
}