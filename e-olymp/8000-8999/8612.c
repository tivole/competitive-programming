// (c) Tivole

// 8612

#include <stdio.h>

int Ti_Function(int);

int main(void) {

  int x;
  scanf("%d", &x);
  x = Ti_Function(x);
  printf("%d\n", x);

  return 0;
}

int Ti_Function(int x) {
  return x < 0 ? x*x*x - 7*x : x*x*x + 2*x*x + 4*x - 6;
}