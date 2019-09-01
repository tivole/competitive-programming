// (c) Tivole

// 57

#include <stdio.h>
#include <math.h>

int main(void){
	
	double x1, y1, z1;
	double x2, y2, z2;
	double r, D;
	
	z1=0;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf %lf", &x2, &y2, &z2);
	
	r = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2));
	
	D = 1/r;
	
	printf("%.3lf", D);
	
	return 0;
}