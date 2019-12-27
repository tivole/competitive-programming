// (c) Tivole

// 5139

#include <stdio.h>

int main() {

  int v1, v2;
  scanf("%d%d", &v1, &v2);
  printf("%.4lf", (double) 2*v1*v2 / (double)(v1 + v2));

  return 0;
}