// (c) Tivole

// 948

#include <stdio.h>
#include <math.h>

int main(void){
	
	double d, p;
	double s, v, p1, s1;
	
	scanf("%lf %lf", &d, &p);
	
	v = (d*d*(sqrt(p*p-(d*d)/2)))/3;
	p1 = (p+p+d)/2;
	s1=sqrt(p1*(p1-p)*(p1-p)*(p1-d));
	s=4*s1+d*d;
	
	printf("%.3lf %.3lf", s, v);
	
	
	
	return 0;
}