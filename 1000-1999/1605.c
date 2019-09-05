// (c) Tivole

// 1605

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char num[16];
  gets(num);
  printf("%c", num[0] == '-' ? num[2] : num[1]);
  return 0;
}