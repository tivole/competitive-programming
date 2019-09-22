// (c) Tivole

// 8243

#include <stdio.h>

int main(void) {

  char num[256];

  scanf("%s", num);

  if(num[0] == '-') {
    printf("%c\n", num[1]);
  }else {
    printf("%c\n", num[0]);
  }

  return 0;
}