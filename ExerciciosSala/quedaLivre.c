//Corpos em queda livre a partir do repouso (v0 = 0)
#include "stdio.h"

#define g 9.8
#define y0 20

int main() {
  int t=0;
  float y=y0;

  printf("#t(s)\t y(m)\n");

  while(y>0) {
    y = y0 - g*t*t/2.;
    printf("%d\t %f\n", t, y);
    t--;
  }

  return 0;
}