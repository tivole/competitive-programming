// (c) Tivole

// 918

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double x, y;
    scanf("%lf %lf", &x, &y);

    if( x>0 && y>0)
        printf("1");
    else if(x>0 && y<0)
        printf("4");
    else if(x<0 && y>0)
        printf("2");
    else if(x<0 && y<0)
        printf("3");
    else
        printf("0");

    return 0;
}