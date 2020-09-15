// (c) Tivole

// 7367

#include <stdio.h>

int main(int argc, char const *argv[]) {

  double n, l = 10.0, t = 10.0;
  scanf("%lf", &n);
  int i = 1;
  while(l < n) {
    t *= 1.1;
    l += t;
    i++;
  }
  printf("%d", i);

  return 0;
}