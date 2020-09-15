// (c) Tivole

// 938

#include <stdio.h>

int main(void) {
    double x1, y1, x2, y2, k;
    scanf("%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &k);
    printf("%.2lf %.2lf", (x1 + k*x2)/(1+k), (y1 + k*y2)/(1+k));

    return 0;
}