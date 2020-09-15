// (c) Tivole

// 295

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, ans=0;
  scanf("%d", &n);

  for (int i = -n; i <= n; i++)
      for (int j = -n; j <= n; j++)
          if (i*i + j*j <= n*n) ans++;

  printf("%d", ans);

  return 0;
}