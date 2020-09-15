// (c) Tivole

// 902

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int point;

    scanf("%d", &point);

    if(point >= 1 && point <=3)
        printf("Initial");
    else if(point >= 4 && point <=6)
        printf("Average");
    else if(point >= 7 && point <=9)
        printf("Sufficient");
    else if(point >= 10 && point <=12)
        printf("High");


    return 0;
}