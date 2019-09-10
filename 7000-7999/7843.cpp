// (c) Tivole

// 7843

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int n, i, k = 0, *a = NULL, *b = NULL;

    scanf("%d", &n);

    a = new int[n];
    b = new int[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i > 0) {
            if (a[i] > a[i-1]) {
                b[k++] = a[i];
            }
        }
    }


    for (i = 0; i < k; i++) {
        if (i != k-1) {
            printf("%d ", b[i]);
        } else {
            printf("%d\n", b[i]);
        }
    }

    return 0;
}