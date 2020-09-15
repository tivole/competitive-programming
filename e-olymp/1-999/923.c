// (c) Tivole

// 923

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int num;
    scanf("%d", &num);

    if(num == 3 || num == 4 || num == 5)
        printf("Spring");
    else if(num == 6 || num == 7 || num == 8)
        printf("Summer");
    else if(num == 9 || num == 10 || num == 11)
        printf("Autumn");
    else if(num == 1 || num == 2 || num == 12)
        printf("Winter");

    return 0;
}