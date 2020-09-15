// (c) Tivole

// 1610

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, m, ans;
  scanf("%d%d", &n, &m);

  ans = m/n;
  if(m%n > 0)
    ans ++;

  printf("%d", ans);

  return 0;
}