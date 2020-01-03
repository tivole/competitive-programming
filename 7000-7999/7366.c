// (c) Tivole

// 7366

#include <stdio.h>

int main(int argc, char const *argv[]) {

  long S;
  int d, h, m, s;
  scanf("%d", &S);

  d = S/(24*60*60);
  h = (S - d*24*3600)/(3600);
  m = (S - d*24*3600 - h*3600)/(60);
  s = S%(60);

  printf("%d %d %d %d\n", d, h, m, s);

  return 0;
}