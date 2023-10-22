// Calcular o valor aproximado de π, usando os primeiros N termos das séries a seguir,
//estimando o erro relativo em relação ao valor assintótico (valor de π em precisão dupla).

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

double serieLeibniz(int n) {
  double serie = 0;

  for (int i = 0; i < n; i++) {
    serie += pow(-1, i)/(2*i+1);
  }
  
  serie = serie*4;
  return serie;
}

double serieEuler(int n) {
  double serie = 0;

  for (int i = 0; i < n; i++) {
    serie += 1/pow(i+1,2);
  }

  serie = sqrt(serie*6);
  return serie;
}

int main() {
  int n = 0;
  double Pi, PiLeibniz, PiEuler;
  
  printf("Vamos calcular o valor aproximado de Pi atraves de dois metodos diferentes. Digite quantos termos das serie deseja calcular:\n");
  scanf("%i", &n);

  Pi = M_PI;
  PiLeibniz = serieLeibniz(n);
  PiEuler = serieEuler(n);

  printf("O valor de Pi eh %lf, o valor calculado com %i termos pelo metodo de Leibniz eh %lf (erro = %lf), e pelo metodo de Euler eh %lf (erro = %lf)\n", Pi, n, PiLeibniz, Pi-PiLeibniz, PiEuler, Pi-PiEuler);

  return 0;
}