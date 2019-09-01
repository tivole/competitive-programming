// (c) Tivole

// 2863

#include <stdio.h>

int main(void) {

  int n, i;

  scanf("%d", &n);

  for(i = 1; i <= n; i+=2)
    if(!(n%i))
      printf("%d\n", i);

  return 0;
}