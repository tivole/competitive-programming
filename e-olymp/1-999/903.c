// (c) Tivole

// 903

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, n1, n3;

    scanf("%d", &num);

    n1 = num/100;
    n3 = num%10;

    if(n1 > n3)
        printf("%d", n1);
    else if(n3 > n1)
        printf("%d", n3);
    else
        printf("=");

    return 0;
}