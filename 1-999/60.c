// (c) Tivole

// 60

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	int *x, *y;
	int n;
	scanf("%d", &n);
	
	x = (int*)malloc(n*sizeof(int));
	y = (int*)malloc(n*sizeof(int));
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	
	double sum=0;
	for(int i=0; i<n; i++){
		if(i==(n-1)){
			sum+=(x[i]*y[0]-x[0]*y[i]);
		}
		else{
			sum+=(x[i]*y[i+1] - x[i+1]*y[i]);
		}
	}
	
	sum = fabs(sum/2);
	
	printf("%.3lf", sum);
	
	return 0;
}