// (c) Tivole

// 6273

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d", (int)sqrtf(a*a + b*b + c*c));

  return 0;
}