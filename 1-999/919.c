// (c) Tivole

// 919

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a[110];
    int lenght, x=0;;
    double sum=0;
    
    scanf("%d", &lenght);
    
    for(int i=0; i<lenght; i++){
		scanf("%lf", &a[i]);
	}
	
	for(int i=1; i<=lenght; i++){
		if(i%3 == 0){
			if(a[i-1] >0){
				x++;
				sum = sum + a[i-1];
			}
		}
	}
	
	printf("%d %.2lf", x, sum);
	
    return 0;
}