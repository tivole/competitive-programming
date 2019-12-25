// (c) Tivole

// 4729

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, t=0;
  while(scanf("%d", &n) == 1){
    if(!n)
      break;
    t++;
  }
  printf("%d\n", t);
  return 0;
}