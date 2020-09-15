// (c) Tivole

// 8602

#include <stdio.h>
#include <string.h>

int main(void) {
  
  char n[16];
  scanf("%s", n);
  printf("%c\n", n[strlen(n) - 3]);

  return 0;
}