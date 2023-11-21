#include "stdio.h"
#include "math.h"
#include "stdbool.h"

//------------------------------------------------------------------------------------------------------------------------------

int main() { 
  int i, *x;
  x = &i;

  printf("Enderecos: %p %p\n", &i, x);

  *x = 42;
  printf("novo valor de i: %i\n", i);

  return 0;
}