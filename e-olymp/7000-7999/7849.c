// (c) Tivole

// 7849

#include <stdio.h>

int main(void) {

  int n, i, Ti_max, Ti_min, A[100];

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    if(i == 0) {
      Ti_max = A[0];
      Ti_min = A[0];
    }
    if(A[i] > Ti_max) Ti_max = A[i];
    if(A[i] < Ti_min) Ti_min = A[i];
  }

  for(i = 0; i < n; i++) {
    if(A[i] == Ti_max) {
      A[i] = Ti_min;
    }else if(A[i] == Ti_min) {
      A[i] = Ti_max;
    }
    if(i != (n-1)) printf("%d ", A[i]);
    else printf("%d\n", A[i]);
  }

  return 0;
}