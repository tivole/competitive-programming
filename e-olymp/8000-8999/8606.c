// (c) Tivole

// 8606

#include <stdio.h>

int main(void) {

  double a, b, c, d;
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
  printf("%.4lf\n%.4lf\n%.4lf\n", (a+b), (a+b+c), (a+b+c+d));

  return 0;
}