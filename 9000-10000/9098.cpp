// (c) Tivole

// 9098

#include <iostream>
#include <cstdio>

int main() {

    long l, r, i, ans;

    scanf("%ld%ld", &l, &r);

    if (r - l == 0) ans = l;
    else {
        ans = l^(l+1);

        for (i = l + 2; i <= r; i++) {
            ans = ans^i;
        }
    }

    printf("%ld\n", ans);

    return 0;
}