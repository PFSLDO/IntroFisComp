//v0x = 0 e v0y = 0: para uma dada escolha de altura inicial, faça gráficos da altura em relação ao tempo (y × t), velocidade vertical em relação ao tempo (vy × t) e velocidade vertical em relação a altura (vy × y).

#include "stdio.h"
#include "math.h"

#define g 9.8
#define y0 20
#define v0x 0
#define v0y 0

int main() {
  float t, tv, x, vy, vx;
  float y = y0;

  tv = sqrt(2*y0/g);
  printf("#t(s)\t y(m)\t x(t)\t vy(m/s)\t vx(m/s)\n");

  for (t=0; t<=tv; t+=0.1) {
    y = y0 +v0y*t - g*t*t/2.;
    x = v0x*t;
    vy = v0y - g*t;
    vx = v0x;
    
    printf("%.2f\t %f\t %f\t %f\t %f\n", t, y, x, vy, vx);
  }

  return 0;
}