// (c) Tivole

// 8605

#include <stdio.h>

int main(void) {

  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  printf("%.4lf %.4lf %.4lf\n", (a+b), (a+c), (b+c));

  return 0;
}