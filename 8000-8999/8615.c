// (c) Tivole

// 8615

#include <stdio.h>

int main(void) {

  int x, a, b;
  scanf("%d%d%d", &x, &a, &b);
  if(x >= a && x <= b) printf("IN");
  else printf("OUT");

  return 0;
}