// (c) Tivole

// 8546

#include <stdio.h>

int main(void) {

  int n, i;
  double sum = 0.0;

  scanf("%d", &n);

  for(i = 1; i <= n; i++) sum += (double) 1.0/((i+1) * i);

  printf("%.6lf\n", sum);

  return 0;
}