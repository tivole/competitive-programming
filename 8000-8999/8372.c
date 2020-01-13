// (c) Tivole

// 8372

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  if((a + b > c) && (a + c > b) && (b + c > a))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
