// (c) Tivole

// 2131

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int x1, x2, y1, y2;
    double ans;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    ans = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("%.6lf\n", ans);


    return 0;
}