// (c) Tivole

// 83

#include <iostream>
#include <cstdio>

using namespace std;

void print_it(int);

int main() {

    int i, k_1, k_2, k_3, D, M, Y, new_D[50], new_M[50], new_Y[50], new_sys;

    scanf("%d/%d/%d", &D, &M, &Y);

    new_sys = D + 1;

    k_1 = 0;
    while(D) {
        new_D[k_1++] = D % new_sys;
        D /= new_sys;
    }

    k_2 = 0;
    while(M) {
        new_M[k_2++] = M % new_sys;
        M /= new_sys;
    }

    k_3 = 0;
    while(Y) {
        new_Y[k_3++] = Y % new_sys;
        Y /= new_sys;
    }

    for (i = k_1 - 1; i >= 0; i--) {
        print_it(new_D[i]);
    }

    printf("/");

    for (i = k_2 - 1; i >= 0; i--) {
        print_it(new_M[i]);
    }

    printf("/");

    for (i = k_3 - 1; i >= 0; i--) {
        print_it(new_Y[i]);
    }

    printf("\n");

    return 0;
}

void print_it(int x) {
    if(x < 10) {
        printf("%d", x);
    } else {
        printf("%c", 'A' + (x-10));
    }
}