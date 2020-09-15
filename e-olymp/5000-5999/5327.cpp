// (c) Tivole

// 5327

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    char sequence[4000000], mystack[4000000];
    int n, i, k;

    scanf("%s", sequence);

    n = strlen(sequence);

    mystack[0] = sequence[0];
    k = 1;

    for (i = 1; i < n; i++) {
        if (k > 0 && mystack[k-1] == '(' && sequence[i] == ')') {
            k--;
        } else {
            mystack[k++] = sequence[i];
        }
    }

    if (k > 0) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}