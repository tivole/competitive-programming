// (c) Tivole

// 5282

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, m, i, j, **A = NULL, *minRow = NULL, *maxCol = NULL, minEl, maxEl, ans = 0;

  scanf("%d%d", &n, &m);

  minRow = (int*)malloc(n * sizeof(int));
  maxCol = (int*)malloc(m * sizeof(int));
  A = (int **)malloc(n * sizeof(int *));
  for(i = 0; i < n; i++) A[i] = (int *)malloc(m * sizeof(int));

  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for(i = 0; i < n; i++) {
    minEl = A[i][0];
    for(j = 0; j < m; j++) {
      if(minEl > A[i][j]) minEl = A[i][j];
    }
    minRow[i] = minEl;
  }

  for(i = 0; i < m; i++) {
    maxEl = A[0][i];
    for(j = 0; j < n; j++) {
      if(maxEl < A[j][i]) maxEl = A[j][i];
    }
    maxCol[i] = maxEl;
  }

  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      // printf("A[i][j] = %d | maxCol[i] = %d | minRow[j] = %d | ", A[i][j], maxCol[i], minRow[j]);
      if(A[i][j] == maxCol[j] && A[i][j] == minRow[i]) {
        ans++;
      }
      // printf("ans = %d\n", ans);
    }
  }

  printf("%d\n", ans);

  return 0;
}