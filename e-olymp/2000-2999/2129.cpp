// (c) Tivole

// 2129

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int x, y;
    double phi, r;

    scanf("%d%d", &x, &y);

    r = sqrt(x*x + y*y);

    if (y >= 0) {
        phi = acos(x / r);
    } else {
        phi = 2*M_PI -  acos(x / r);
    }
    

    printf("%.6lf\n", phi);

    return 0;
}