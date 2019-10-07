// (c) Tivole

// 2616

#include <iostream>
#include <cstdio>

int main() {

    long n, a, i, sum = 0;

    scanf("%ld", &n);

    for (i = 0; i < n - 1; i++) {
        scanf("%ld", &a);
        sum += a;
    }

    printf("%ld\n", (n*(n+1)/2 - sum));

    return 0;
}