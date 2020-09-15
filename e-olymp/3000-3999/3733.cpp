// (c) Tivole

// 3733

#include <iostream>
#include <cstdio>

using namespace std;

long gcd(long, long);
long lcm(long, long);


int main() {

    long n, i, ans = 1;

    scanf("%ld", &n);

    for (i = 1; i <= n; i++) ans = lcm(i, ans);

    printf("%ld\n", ans);

    return 0;
}

long gcd(long a, long b) { return !(a % b) ? b : gcd(b, a%b); }
long lcm(long a, long b) { return a*b/(gcd(a, b)); }