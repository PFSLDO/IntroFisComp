//Calcular o valor aproximado de π, usando os primeiros N termos das séries a seguir, estimando o erro relativo em relação ao valor assintótico (valor de π em precisão dupla).
//Dica: para alguns casos se faz útil o uso de fórmulas de recorrência sn = f(sn−1).
//Dica: Uma alternativa para escrever (−1)n de maneira computacionalmente mais eficiente é (1-2*(n%2)).

#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

double serieSharp(int n) {
  double serie = 0;

  for (int i = 0; i < n; i++) {
    serie += 2*pow(-1, i)*pow(3, 1/2-i)/(2*i+1);
  }
  
  return serie;
}

double serieWallis(int n) {
  double serie = 0;

  for (int i = 1; i < n; i++) {
    serie *= pow(2*i, 2)/((2*i-1)*(2*i+1));
  }
  
  return serie*2;
}

int main() { 
  int n = 0;
  double Pi, piSharp, piWallis, piViete, piLambert;
  
  printf("Vamos calcular o valor aproximado de Pi atraves de metodos diferentes. Digite quantos termos das serie deseja calcular:\n");
  scanf("%i", &n);

  Pi = M_PI;
  piSharp = serieSharp(n);
  piWallis = serieWallis(n);

  printf("O valor de Pi eh %lf, o valor calculado com %i termos pelo: metodo de Sharp: %lf (erro = %lf), metodo de Wallis eh %lf (erro = %lf)\n", Pi, n, piSharp, Pi-piSharp, piWallis, Pi-piWallis);

  return 0;
}