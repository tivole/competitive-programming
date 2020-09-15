// (c) Tivole

// 7309

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {

    int n, k, i, j, aa, *a = NULL;

    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        scanf("%d", &aa);
        while(aa % 2 == 0) aa /= 2;
        a[i] = aa;
        k++;
    }

    if(k == 0) {
        printf("YES\n");
        return 0;
    }


    for(i = 0; i < k; i++) {
        for(j = 0; j < k; j++) {
            if(a[i] != a[j]) {
                printf("NO\n");
                return 0;
            }
        }
 
    }

    printf("YES\n");


    return 0;
}