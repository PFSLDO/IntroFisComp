#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

double potencial(double x, int m) {
  double p=1.0;
  int i;

  for (i=1; i<=m; i++) {
    p *=x;
  }

  return p;
}

int main() { 
  printf("%f\n", potencial(2.5, 3));

  return 0;
}