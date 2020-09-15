// (c) Tivole

// 8613

#include <stdio.h>

long Ti_Function(long);

int main(void) {

  long x;
  scanf("%ld", &x);
  x = Ti_Function(x);
  printf("%ld\n", x);

  return 0;
}

long Ti_Function(long x) {
  return x < 13 ? 3*x*x*x - 2*x*x - 3*x - 4 : 3*x*x*x + 4*x*x + 5*x + 6;
}