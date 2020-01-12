// (c) Tivole

// 8371

#include <stdio.h>

int main() {
  long num;
  scanf("%ld", &num);
  if (num % 2 == 0) printf("EVEN");
  else if (num % 2 == 1) printf("ODD");
  return 0;
}