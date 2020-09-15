// (c) Tivole

// 1623

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, odd = 0, even = 0;

  for(int i = 0; i < 3; i++) {
    scanf("%d", &n);
    if (n >= 0 && n % 2 == 0) even = 1;
    if (n >= 0 && n % 2 == 1) odd = 1;
  }

  if (odd && even) printf("YES");
  else printf("NO");

  return 0;
}