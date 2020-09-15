// (c) Tivole

// 8545

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, i, j, **A;

  scanf("%d", &n);

  A = (int**)malloc(n*sizeof(int*));
  for(i = 0; i < n; i++) A[i] = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) {
    A[0][i] = i+1;
    A[i][0] = i+1;
  }

  for(i = 1; i < n; i++) {
    for(j = 1; j < n; j++) {
      A[i][j] = A[0][j] * A[i][0];
    }
  }

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(A[n-1][n-1] > 9) {
        if(A[i][j] > 9)
          printf("%d ", A[i][j]);
        else {
          if(j != 0)
            printf(" %d ", A[i][j]);
          else
            printf("%d ", A[i][j]);
        }
      }else
        printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}