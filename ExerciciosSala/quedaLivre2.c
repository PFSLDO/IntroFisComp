//Corpos em queda livre a partir do repouso (v0 = 0)
#include "stdio.h"
#include "math.h"

#define g 9.8
#define y0 20

int main() {
  float t, tv;
  float y = y0;

  tv = sqrt(2*y0/g);
  printf("#t(s)\t y(m)\n");

  for (t=0; t<=tv; t+=0.1) {
    y=y0 - g*t*t/2.;
    printf("%.2f\t %f\n", t, y);
  }

  return 0;
}