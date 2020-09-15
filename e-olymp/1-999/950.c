// (c) Tivole

// 950

#include <stdio.h>
#include <math.h>


int main(void){
	double a, b, x1, y1;
	scanf("%lf %lf %lf %lf", &a, &b, &x1, &y1); 

	a=fabs(a);
	b=fabs(b);
	x1=fabs(x1);
	y1=fabs(y1);
	printf("%.3lf %.3lf %.3lf %.3lf\n", fabs(a*b), fabs(a*(y1-b)), fabs((x1-a)*(y1-b)), fabs((x1-a)*b));

	return 0;
}