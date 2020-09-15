// (c) Tivole

// 8520

#include <stdio.h>
int main() {
  int x;
  scanf("%d", &x);
  if(x >= 5) printf("%d", x + 7);
  else printf("%d", x*x - 3*x + 4);
  return 0;
}