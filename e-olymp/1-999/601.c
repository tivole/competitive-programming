// (c) Tivole

// 601

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, p, i, *a = NULL, ans = 0;

  scanf("%d%d", &n, &p);

  a = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    ans += a[i];
  }

  if(p > n/2) ans += (n - p) * 2 + (p - 1);
  else  ans += (n - p) + (p - 1) * 2;
  
  printf("%d\n", ans);

  return 0;
}