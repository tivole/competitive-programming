// (c) Tivole

// 138

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, sum=0;
  scanf("%d", &n);

  int cash[6] = {500, 200, 100, 50, 20, 10};

    for(int i=0; i<6; i++) {
      int t = n/cash[i];
      n -= t*cash[i];
      sum += t;
    }

    printf("%d", n==0 ? sum : -1);

  return 0;
}