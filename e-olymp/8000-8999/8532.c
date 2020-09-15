// (c) Tivole

// 8532

#include <stdio.h>

int main(void) {

  long a, b, i;

  scanf("%ld%ld", &a, &b);

  for(i = a; i <= b; i++) {
    if(i != b) printf("%ld ", i*i);
    else printf("%ld\n", i*i);
  }

  for(i = b; i >= a; i--) {
    if(i != a) printf("%ld ", i*i*i);
    else printf("%ld\n", i*i*i);
  }

  return 0;
}