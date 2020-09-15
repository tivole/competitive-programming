// (c) Tivole

// 4737

#include <stdio.h>

int main(int argc, char const *argv[]) {

  char c, prev = ' ';

  while((c=getchar()) != '\n') {
    if(prev == ' ' && c == ' ') {
      continue;
    }
    printf("%c", c);
    prev = c;
  }

  return 0;
}