// (c) Tivole

// 7338

#include <stdio.h>
#include <math.h>

int sum(int n) {
    int t=0;
    while(n){
      t+=n%10;
      n/=10;
    }
    return t;
}

int getCounts(int n) {
    int t = 0, i = 9;
    while (++i < 1e2)
        if (sum(i) == sum(i * n))
            t++;
    return t;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", getCounts(n));

  return 0;
}