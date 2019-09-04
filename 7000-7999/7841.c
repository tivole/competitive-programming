// (c) Tivole

// 7841

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  int n, i, a, t = 0, *OddNumbers = NULL;

  scanf("%d", &n);

  OddNumbers = (int*)malloc(n*sizeof(int));

  for(i = 0; i < n; i++) {
    scanf("%d", &a);

    if(abs(a) % 2 == 1) {
      OddNumbers[t] = a;
      t++;
    }
  }

  for(i = 0; i < t; i++) {
    if(i!= t-1) printf("%d ", OddNumbers[i]);
    else printf("%d\n", OddNumbers[i]);
  }

  return 0;
}