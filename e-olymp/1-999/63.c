// (c) Tivole

// 63

#include <stdio.h>
 
int main(void) {
    long m, n, t;
    scanf("%ld %ld",&m, &n);

    t=(m*n)-(m+n-2);

    printf("%ld", t);

    return 0;
}