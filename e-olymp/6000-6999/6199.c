// (c) Tivole

// 6199

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  int n, i, *A;

  scanf("%d", &n);

  A = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) scanf("%d", &A[i]);

  for(i = 0; i < n; i++) {
    if(abs(A[i]) % 2 == 0) {
      printf("%d is even\n", A[i]);
    }else {
      printf("%d is odd\n", A[i]);
    }
  }

  return 0;
}