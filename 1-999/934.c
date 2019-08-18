// (c) Tivole

// 934

#include <stdio.h>
#include <math.h>
int main(void){
	double a, b, c;
	double ha, hb, hc, p, s;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a+b+c)/2;
	
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	ha = (2/a)*s;
	hb = (2/b)*s;
	hc = (2/c)*s;
	
	printf("%.2lf %.2lf %.2lf", ha, hb, hc);
	return 0;
}