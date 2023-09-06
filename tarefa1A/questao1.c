/*  
A pressão de um gás de Fermi, que pode aproximar muito bem o comportamento de elétrons livres em um metal condutor, é dada por : obre ele(constante, em N).
onde ~ = 1.054571800 × 10−34 Js é a constante reduzida de Planck, m = 9.10938356 × 10−31 kg é
a massa do elétron e ρ é a densidade eletrônica, que depende do elemento metálico. Sabendo que
a densidade eletrônica do potássio é de ρK = 1.4×1028 m−3
, do cobre é de ρCu = 8.47×1028 m−3
e do ferro é de ρF e = 17.0×1028 m−3
calcule a pressão eletrônica desses metais, em Pa. Tenha em
mente que a pressão atmosférica em temperatura ambiente vale aproximadamente 105 Pa. Dica,
no caso do cobre a pressão deve ser aproximadamente 3.8e10.
*/

#include "stdio.h"
#include "math.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  float massa, tPercurso, vInicial, forca, aceleracao, deslocamento;

  printf("Vamos calcular o deslocamento de um corpo ideal.\nDigite a massa dele, em kg:\n");
  scanf("%f", &massa);
  printf("Digite o tempo de percurso dele, em segundos:\n");
  scanf("%f", &tPercurso);
  printf("Digite o valor da velocidade inicial dele, m/s:\n");
  scanf("%f", &vInicial);
  printf("Digite o valor da forca atuando sobre ele, em N:\n");
  scanf("%f", &forca);

  aceleracao = forca/massa;
  deslocamento = (vInicial * tPercurso) + (aceleracao * pow(tPercurso,2)/2);

  printf("O deslocamento total do objeto foi de %f", deslocamento);

  return 0;
}