// (c) Tivole

// 520

#include <stdio.h>

int main(int argc, char const *argv[]) {
  long long sum=0, n;
  while (scanf("%lld", &n)==1)
    sum+=n;

  printf("%lld", sum);

  return 0;
}