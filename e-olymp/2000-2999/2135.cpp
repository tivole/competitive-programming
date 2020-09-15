// (c) Tivole

// 2135

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int sgn(int);

int main() {

    int x1, x2, y1, y2, A, B, C, sgn1, sgn2;

    scanf("%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &A, &B, &C);

    sgn1 = sgn(x1*A + y1*B + C);
    sgn2 = sgn(x2*A + y2*B + C);

    if (sgn1 == sgn2) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int sgn(int x) {
    if (x > 0) return 1;
    else if (x < 0) return -1;
    return 0;
}