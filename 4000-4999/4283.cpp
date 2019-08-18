// (c) Tivole

// 4283

#include <iostream>

using namespace std;

int main() {

    int i, j, ans, n;

    scanf("%d", &n);

    ans = 0;

    for(i = 1; i <= (n/2); i++) {
        ans += n/i;
    }

    ans += (n-(n/2));

    printf("%d\n", ans);


    return 0;
}