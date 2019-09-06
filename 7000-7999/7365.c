// (c) Tivole

// 7365

#include <stdio.h>

int n, t;
double d;

int main(void){

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%lf", &d);
        t += d < 30.0 ? 1 : 0;
    }
    printf("%d %d\n", (2 * t + 8) / 9, t);

  return 0;
}