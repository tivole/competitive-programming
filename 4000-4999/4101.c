// (c) Tivole

// 4101

#include <stdio.h>

int main(void) {

  int n, i, k = 0, nums[256];

  scanf("%d", &n);

  for(i = 100; i < 1000; i++) {
    if((i%10 + i/100 + (i/10)%10) == n) {
      nums[k] = i;
      k++;
    }
  }

  printf("%d\n", k);
  for(i = 0; i < k; i++) printf("%d\n", nums[i]);

  return 0;
}