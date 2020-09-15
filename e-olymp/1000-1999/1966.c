// (c) Tivole

// 1966

#include <stdio.h>

int main(void) {

  int n, i, j;

  scanf("%d", &n);

  n = 2*n + 1;

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(i == n/2 || j == n/2) {
        printf("*");
      }else {
        printf(".");
      }
    }
    printf("\n");
  }


  return 0;
}