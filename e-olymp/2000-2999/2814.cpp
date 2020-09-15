// (c) Tivole

// 2814

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {

    int n, i, k, binary[64];
    char ans[1024];

    scanf("%d", &n);

    i = 0;
    while(n) {
        if(n%2 == 0) {
            binary[i] = 0;
            i++;
        }else {
            binary[i] = 1;
            i++;
        }
        n /= 2;
    }

    n = i;


    k = 0;
    for(i = n-2; i >= 0; i--) {
        if(binary[i] == 0) {
            ans[k++] = 'S';
        }else {
            ans[k++] = 'S';
            ans[k++] = 'X';
        }
    }

    ans[k] = '\0';

    printf("%s\n", ans);


    return 0;
}