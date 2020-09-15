// (c) Tivole

// 5087

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int n, i, operation, element, stack[10000], k = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &operation);
        if (operation == 1) {
            scanf("%d", &element);
            stack[k++] = element;
        } else {
            printf("%d\n", stack[--k]);
        }
    }

    return 0;
}