// (c) Tivole

// 7534

#include <iostream>

using namespace std;

double C(double a, double b) {
    double a1 = 1, a2 = 1, a3 = 1, i;

    for(i = a; i >=1; i--) a1 *= i;
    for(i = b; i >=1; i--) a2 *= i;
    for(i = (a-b); i >=1; i--) a3 *= i;

    return (a1/(a2*a3));
}

int main() {

    double n, m;
    int t, i;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%lf%lf", &n, &m);
        printf("%.0lf\n", C(n, m-1));
    }

    return 0;
}