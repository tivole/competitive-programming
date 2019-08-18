// (c) Tivole

// 924

#include <stdio.h>
#include <math.h>
int main(void){
	
	float S, R2, R1;
	
	scanf("%f %f", &S, &R1);
	
	R2 = sqrt(R1*R1 - (S/M_PI));
	
	printf("%.2lf\n", R2);
	return 0;
}