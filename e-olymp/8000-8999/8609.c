// (c) Tivole

// 8609

#include <stdio.h>

int Ti_Function(int);

int main(void) {

  int n;
  scanf("%d", &n);
  n = Ti_Function(n);
  printf("%d\n", n);

  return 0;
}

int Ti_Function(int n) {
  return n == 0 ? 0 : Ti_Function(n - 1) + n;
}