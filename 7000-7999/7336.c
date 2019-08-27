// (c) Tivole

// 7336

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, n;
  scanf("%d%d%d", &a, &b, &n);
  printf("%d %d\n",a*n + b*n/100, b*n%100 );

  return 0;
}