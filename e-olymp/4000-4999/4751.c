// (c) Tivole

// 4751

#include <stdio.h>

int main(void) {

  int n, i, j, a, sum1 = 0, sum2 = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++) {
      scanf("%d", &a);
      if(i == j) sum1 += a;
      if((i + j) == (n - 1)) sum2 += a;
    }

  printf("%d %d\n", sum1, sum2);

  return 0;
}