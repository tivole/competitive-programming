// (c) Tivole

// 911

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int a, b, c;
    float d;
    int x1, x2;

    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d>=0){
        x1 = (-1*b + sqrt(d))/(2*a);
        x2 = (-1*b - sqrt(d))/(2*a);
    }

    
    if(d == 0){
        printf("One root: %d", x1);
    }else if(d > 0){
        if(x1 > x2){
            printf("Two roots: %d %d", x2, x1);
        }else if(x2 > x1){
            printf("Two roots: %d %d", x1, x2);
        }
    }else if(d < 0){
        printf("No roots");
    }
    
    return 0;
}