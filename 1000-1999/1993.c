// (c) Tivole

// 1993

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  if (n < 4) n = 1;
  else n = n < 10 ? 2 : 3;

  printf("%d", n);

  return 0;
}