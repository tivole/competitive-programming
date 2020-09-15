// (c) Tivole

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
	
	for(int i=0; i<lenght; i++){
		if(a[i] < 0){
			sum = sum + a[i];
			x++;
		}
	}
	
	printf("%d %.2lf", x, sum);
	
    return 0;
}