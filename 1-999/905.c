// (c) Tivole

// 905

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a != b && b != c && a != c)
        printf("3");
    else if(a == b && b == c && a == c)
        printf("1");
    else
        printf("2");


    return 0;
}