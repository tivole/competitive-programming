// (c) Tivole

// 5713

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int i, n, *a = NULL, maxN, minN;
  scanf("%d", &n);
  a = (int*)malloc(n * sizeof(int));
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if(i == 0) {
      maxN = a[i];
      minN = a[i];
    }
    if(a[i] > maxN) maxN = a[i];
    if(a[i] < minN) minN = a[i];
  }

  printf("%d\n", maxN - minN);

  return 0;
}