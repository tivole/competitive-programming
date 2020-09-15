// (c) Tivole

// 5328

#include <stdio.h>

int main(void) {

  int n, i, ti_min, num;

  scanf("%d", &n);

  scanf("%d", &num);
  ti_min = num;

  for(i = 1; i < n; i++) {
    scanf("%d", &num);
    if(ti_min > num) ti_min = num;
  }

  printf("%d\n", ti_min);

  return 0;
}