// (c) Tivole

// 7526

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, t, i, sum = 0, ans = 0, *A = NULL;

  scanf("%d%d", &n, &t);

  A = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) scanf("%d", &A[i]);

  for(i = 0; i < n; i++) {
    sum += A[i];
    if(sum <= t) {
      ans++;
    }else {
      break;
    }
  }

  printf("%d\n", ans);

  return 0;
}