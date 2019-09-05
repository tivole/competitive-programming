// (c) Tivole

// 1606

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char num[16];
  gets(num);
  printf("%d", (int) num[strlen(num) - 1] + (int)(num[0] == '-' ? num[1] : num[0]) - 96);
  return 0;
}