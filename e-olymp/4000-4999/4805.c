// (c) Tivole

// 4805

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  double P, S;
  int a;
  scanf("%d", &a);

  P = (double)3*a;
  S = (double)sqrt(3)*a*a/4;

  printf("%.4lf %.4lf", P, S);

  return 0;
}