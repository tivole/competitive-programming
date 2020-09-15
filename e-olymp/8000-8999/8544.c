// (c) Tivole

// 8544

#include <stdio.h>

int main(void) {

  long n, i;

  scanf("%ld", &n);

  for(i = 1; i*i <= n; i++) {
    if((i+1)*(i+1) <= n) printf("%ld ", i*i);
    else printf("%ld\n", i*i);
  }

  return 0;
}