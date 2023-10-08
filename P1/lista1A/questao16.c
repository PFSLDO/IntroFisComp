/*
Calcule a pressão de um gás de nitrogênio (cte de gás R = 0.2968 kPa m3/kg K) sob a condição de
temperatura T = 175K e volume específico ν = 0.00375 m3/kg, utilizando as seguintes equações
de estado, comparando com o valor experimental de Pexp = 10000 kPa - forneçam ambas pressão
P e erro relativo
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define CONSTGAS 0.2968
#define PRESSAOEXP 10000

//------------------------------------------------------------------------------------------------------------------------------

const float temp = 175, volEsp = 0.00375, volEspMolar = 0.10505, rU = 8.314;

float erroRelativo(float pressao) {
  return fabs(pressao - PRESSAOEXP) / PRESSAOEXP;
}

void pressaoGasIdeal() {
  float gasIdeal = 0, erro = 0;

  gasIdeal = CONSTGAS * temp / volEsp;
  erro = erroRelativo(gasIdeal);

  printf("A pressao calculada atraves da equacao de gas ideal eh: %f +/- %f\n", gasIdeal, erro);
}

void pressaoVanDerWaals() {
  float vanDerWaals = 0, erro = 0;
  const float a = 0.175, b = 0.00138;

  vanDerWaals = (CONSTGAS * temp / (volEsp - b)) - (a / pow(volEsp,2));
  erro = erroRelativo(vanDerWaals);

  printf("A pressao calculada atraves da equacao de van der Waals eh: %f +/- %f\n", vanDerWaals, erro);
}

void pressaoBeattie() {
  float beattie = 0, erro = 0;
  const float a = 102.29, b = 0.05378, c = 42000;

  beattie = (rU * temp / pow(volEspMolar,2)) * (1 - c / (volEspMolar * pow(temp, 3))) * (volEspMolar + b) - a/pow(volEspMolar,2);
  erro = erroRelativo(beattie);

  printf("A pressao calculada atraves da equacao de Beattie-Bridgeman eh: %f +/- %f\n", beattie, erro);
}

void pressaoBenedict() {
  float benedict = 0, erro = 0;
  const float a = 2.54, b = 0.002328, c = 73790, alpha = 0.0001272, a0 = 106.73, b0 = 0.04074, c0 = 816400, gamma = 0.0053;

  benedict = (rU*temp/volEspMolar) + (b0*rU*temp - a0 - c0/pow(temp,2)) * (1/pow(volEspMolar,2)) + ((b*rU*temp - a)/pow(volEspMolar,3)) + (a*alpha/pow(volEspMolar,6)) + (c/pow(volEspMolar,3)*pow(temp,2)) * (1 + gamma/pow(volEspMolar,2)) * exp(-(gamma/pow(volEspMolar,2)));
  erro = erroRelativo(benedict);

  printf("A pressao calculada atraves da equacao de Benedict-Webb-Rubin eh: %f +/- %f\n", benedict, erro);
}

int main() {
  printf("Vamos calcular a pressao de um gas de nitrogenio de formas diferentes, apresentando os resultados juntamneto de seus erros relativos, que consideram a pressao de 10000 kPa experimental.\n");

  pressaoGasIdeal();
  pressaoVanDerWaals();
  pressaoBeattie();
  pressaoBenedict();
  
  return 0;
}