// (c) Tivole

// 2130

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int x1, x2, y1, y2;
    double ans;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    ans = acos(((double) x1*x2 + y1*y2) / ((double) sqrt(x1*x1 + y1*y1) * sqrt(x2*x2 + y2*y2)));

    printf("%.5lf\n", ans);


    return 0;
}