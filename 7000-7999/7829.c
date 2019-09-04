// (c) Tivole

// 7829

#include <stdio.h>

int main(void) {

  int n, i;
  double sum = 0, a;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%lf", &a);
    sum += a;
  }

  printf("%.1lf", sum);

  return 0;
}