// (c) Tivole

// 8608

#include <stdio.h>

int sgn(int);

int main(void) {

  int n;
  scanf("%d", &n);
  printf("%d\n", sgn(n));

  return 0;
}

int sgn(int x) {
  if(!x) return 0;
  return x > 0 ? 1 : -1;
}