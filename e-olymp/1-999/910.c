// (c) Tivole

// 910

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a[110], b[110];
    int lenght, x=0;
    double sum=0;
    
    scanf("%d", &lenght);
    
    for(int i=0; i<lenght; i++){
		scanf("%lf", &a[i]);
	}
    
    for(int i=0; i<lenght; i++){
		if(a[i] > 0){
			b[x] = a[i];
			x++;
		}
	}
    
    for( int i = 0; i<x; i++){
		sum = sum + b[i];
	}
    
    if(x!=0){
		printf("%.2lf", sum/x);
	}else{
		printf("Not Found");
	}
	
    return 0;
}