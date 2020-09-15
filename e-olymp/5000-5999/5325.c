// (c) Tivole

// 5325

#include <stdio.h>

int main(void) {

  int n, i;

  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    if(i != n) printf("%d ", i);
    else printf("%d\n", i);
  }

  return 0;
}