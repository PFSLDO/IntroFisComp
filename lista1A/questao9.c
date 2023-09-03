// Calcule a força gravitacional F~ g entre a Terra e Marte sabendo a posição de Terra ~rT e posição de Marte ~rM em um dado instante.

#include "stdio.h"
#include "math.h"
#define G 0.0000000000667384

//------------------------------------------------------------------------------------------------------------------------------

int main() {
  long double forcaG, massaTerra = 5972000000000000000000000, massaMarte = 639000000000000000000000, posicaoTerra, posicaoMarte;

  printf("Vamos calcular a forca gravitacional entre terra e marte em uma posicao especifica.\nDigite o valor da posicao da terra, sob um referencial qualquer, em uma dimensao\n");
  scanf("%LF", &posicaoTerra);
  printf("Digite o valor da posicao de marte, sob o mesmo referencial de antes, em uma dimensao\n");
  scanf("%LF", &posicaoMarte);

  forcaG = (G * massaTerra * massaMarte) / pow(posicaoTerra - posicaoMarte, 2);

  printf("O valor da forca gravitacional eh: %LF", forcaG);

  return 0;
}