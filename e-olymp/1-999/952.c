// (c) Tivole

// 952

#include <stdio.h>
#include <math.h>

int main(void){
	
	double a, h, s;
	scanf("%lf %lf", &a, &h);
	double k = (sqrt(2)*a)/2;
	double l = sqrt(k*k + h*h);
	double p = (l + l + a)/2;
	double s1 = sqrt(p*(p-l)*(p-l)*(p-a));
	
	s = a*a + 4*s1;
	
	printf("%.1lf", s);
	
	return 0;
}