// (c) Tivole

// 269

#include <stdio.h>
#include <math.h>

int main(void){
	double a, b, c, d;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	d=1/a+1/b+1/c+2*sqrt(a+b+c)/sqrt(a*b*c);
	d=1/d;
	
	printf("%.4lf", d);
	
	return 0;
}