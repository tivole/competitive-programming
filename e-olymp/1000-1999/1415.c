// (c) Tivole

// 1415

#include <stdio.h>
#include <stdlib.h>

int isIntersect(int a1, int b1, int a2, int b2);

int main(void) {

  int n, i, j, k, **A = NULL, *D = NULL, minBegin, maxEnd, maxD = 0;

  scanf("%d", &n);

  D = (int *)malloc(n * sizeof(int));
  A = (int **)malloc(n * sizeof(int *));
  for(i = 0; i < n; i++) A[i] = (int *)malloc(2 * sizeof(int));


  scanf("%d%d", &A[0][0], &A[0][1]);
  minBegin = A[0][0];
  maxEnd   = A[0][1];

  for(i = 1; i < n; i++) {
    scanf("%d%d", &A[i][0], &A[i][1]);
    if(maxEnd < A[i][1]) maxEnd = A[i][1];
    if(minBegin > A[i][0]) minBegin = A[i][0];
  }

  for(i = minBegin, k = 0; i < maxEnd; i++, k++) {
    D[k] = 0;
    for(j = 0; j < n; j++) {
      if(isIntersect(i, i, A[j][0], A[j][1])) {
        D[k] ++;
      }
    }
    if(maxD < D[k]) maxD = D[k];
  }

  printf("%d\n", maxD);

  return 0;
}

int isIntersect(int a1, int b1, int a2, int b2) {
  if(a1 >= a2) if(b2 >= a1) return 1;
  if(a2 >= a1) if(b1 >= a2) return 1;
  return 0;
}