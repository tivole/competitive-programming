// (c) Tivole

// 1658

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long f=1;

  for(int i=1; i<=n; i++)
    f*=i;

  printf("%lld\n", f);

  return 0;
}