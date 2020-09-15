// (c) Tivole

// 8603

#include <stdio.h>

int main(void) {

  int n;
  scanf("%d", &n);
  printf("%d %d\n", (n/100)+((n%100)/10)+(n%10), (n/100)*((n%100)/10)*(n%10));

  return 0;
}