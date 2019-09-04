// (c) Tivole

// 7813

#include <stdio.h>

int main(int argc, char const *argv[]) {
  double a, b, c, x, y, z;
  scanf("%lf%lf%lf", &a, &b, &c);
  x=(a+c-b)/2;
  y=(a+b-c)/2;
  z=(b+c-a)/2;
  printf("%.2lf %.2lf %.2lf\n", x, y, z);

  return 0;
}