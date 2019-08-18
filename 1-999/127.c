// (c) Tivole

// 127

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a[900];
    long bank[900];
    long s, otvet;
    a[1] = 1;
    bank[1] = 1;

    scanf("%ld", &s);
    int k;
    for(k = 2; k <= 800; k++){
        a[k] = k + (a[k-1])*2;
        bank[k] = bank[k-1] + a[k];
    }

    int i;
    for(i = 1; i <= 800; i++){
        if(bank[i] >= s ){
            otvet = i;
            i+=1000;
        }
    }
    printf("%ld\n", otvet);
    return 0;
}