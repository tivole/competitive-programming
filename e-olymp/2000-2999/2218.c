// (c) Tivole

// 2218

#include <stdio.h>

int Ti_min(int, int);

int main(void) {

  int n, c, i, a = 0, b = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    scanf("%d", &c);
    if(c) a++;
    else b++;
  }

  printf("%d\n", Ti_min(a, b));

  return 0;
}


int Ti_min(int a, int b) {
  return a > b ? b : a;
}