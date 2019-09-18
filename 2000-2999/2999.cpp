// (c) Tivole

// 2999

#include <iostream>
#include <cstdio>

using namespace std;


int f(int, int);

int main() {

    int n, m;

    scanf("%d%d", &n, &m);

    printf("%d\n", f(m, n));

    return 0;
}

int f(int m, int n) {
    return (n == m || m == 0) ? 1 : f(m-1, n-1) + f(m, n-1);
}