// (c) Tivole

// 8355

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int n, i, book, operation, array[22000], left = 11000, right = 11001;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &operation);

        if (operation == 1) {
            // left push
            scanf("%d", &book);
            array[left--] = book;

        } else if(operation == 2) {
            // right push
            scanf("%d", &book);
            array[right++] = book;

        } else if(operation == 3) {
            // left pop
            printf("%d\n", array[++left]);

        } else if(operation == 4) {
            // right pop
            printf("%d\n", array[--right]);
        }
    }

    return 0;
}