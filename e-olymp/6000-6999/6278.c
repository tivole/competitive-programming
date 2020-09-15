// (c) Tivole

// 6278

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a, b;
  scanf("%d%d", &a, &b);

  if(a % 2 == b % 2) printf("1");
  else printf("0");

  return 0;
}