// (c) Tivole

// 3171

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int R, X, Y, x, y;

    scanf("%d%d%d%d%d", &X, &Y, &R, &x, &y);

    if (sqrt((X-x)*(X-x) + (Y-y)*(Y-y)) <= R) printf("YES\n");
    else printf("NO\n");

    return 0;
}