// (c) Tivole

// 407

#include <stdio.h>

int main(void){
    int m;
    scanf("%d", &m);
    int a[m+1];
    for (int i = 1; i <= m; i++){
      scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++){
        if (a[i]%3 == 0) printf("GCV\n");
        if (a[i]%3 == 1) printf("VGC\n");
        if (a[i]%3 == 2) printf("CVG\n");
    }

    return 0;
}