// (c) Tivole

// 7831

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, *A, Ti_max, i, sum = 0;

  scanf("%d", &n);

  A = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) scanf("%d", &A[i]);

  Ti_max = A[0];

  for(i = 1; i < n; i++)
    if(A[i] > Ti_max)
      Ti_max = A[i];

  for(i = 0; i < n; i++)
    if(A[i] != Ti_max)
      sum += A[i];

  printf("%d\n", sum);

  return 0;
}