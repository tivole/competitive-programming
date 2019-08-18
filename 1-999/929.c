// (c) Tivole

// 929

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    if( (a == b && c == d) || (a == c && b == d) || (a == d && c == b) )
        printf("YES");
    else
        printf("NO");

    return 0;
}