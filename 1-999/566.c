// (c) Tivole

// 566

#include <stdio.h>

int Ti_max(int, int);

int main(void) {

  int t, i, j, m, n, s, r, c;

  scanf("%d", &t);

  while (t-- > 0) {
    s = 0;
    r = 0;
    scanf("%d%d", &m, &n);
    for(i = 1; i <= m; i++) {
      for(j = 1; j <= n; j++) {
        c = Ti_max(m - i + 1, 0) * Ti_max(n - j + 1, 0);

        if(i == j) s += c;
        else r += c;
      }
    }
    printf("%d %d\n", s, r);
  }

  return 0;
}


int Ti_max(int a, int b) {
  return a > b ? a : b;
}