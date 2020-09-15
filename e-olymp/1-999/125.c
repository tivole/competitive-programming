// (c) Tivole

// 125

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int h1, m1, s1, h2, m2, s2;
    int sum1, sum2, sum;
    int o1, o2, o3;

    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    sum1 = h1*3600 + m1*60 + s1;
    sum2 = h2*3600 + m2*60 + s2;
    sum = sum2 - sum1;
    o1 = sum/3600;
    o3 = sum%60;
    o2 = (sum%3600 - o3)/60;

    printf("%d %d %d", o1, o2, o3);
    return 0;
}