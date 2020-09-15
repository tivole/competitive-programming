// (c) Tivole

// 201

#include <stdio.h>
 
int main(void) {
    long num, o;
    scanf("%ld", &num);

    if(num == 0)
        o=1;
    else
        o = num*(num-1)+2;

    printf("%ld", o);

    return 0;
}