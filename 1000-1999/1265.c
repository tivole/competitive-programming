// (c) Tivole

// 1265

#include <stdio.h>

int main(void) {

  int a, b, c;

  while(scanf("%d%d%d", &a, &b, &c) == 3) {
    if(a == b && b == c && c == 0) break;
    if(a > b && a > c) {
      if(c*c + b*b == a*a) printf("right\n");
      else printf("wrong\n");
    }else if(b > a && b > c) {
      if(a*a + c*c == b*b) printf("right\n");
      else printf("wrong\n");
    }else if(c > a && c > b) {
      if(a*a + b*b == c*c) printf("right\n");
      else printf("wrong\n");
    }else {
      printf("wrong\n");
    }
  }

  return 0;
}