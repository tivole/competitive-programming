// (c) Tivole

// 5083

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int n, a, i, min_sum, sum, number, real_a;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);

        real_a = a;
        sum = 0;
        while (a) {
            sum += (a%10);
            a /= 10;
        }

        if (i == 0) {
            min_sum = sum;
            number = real_a;
        } else {
            if (min_sum >= sum) {
                min_sum = sum;
                number = real_a;
            }
        }
    }

    printf("%d\n", number);

    return 0;
}