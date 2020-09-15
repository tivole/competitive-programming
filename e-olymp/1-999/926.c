// (c) Tivole

// 926

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a, b, c, d, f;
    double s, s1, s2, p1, p2;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &f);
	
	p1 = (a + b + f)/2;
	p2 = (d + c +f)/2;
	
	s1 = sqrt(p1*(p1 - a)*(p1 - b)*(p1 - f));
	s2 = sqrt(p2*(p2 - d)*(p2 - c)*(p2 - f));
	s = s1 + s2;
	
	printf("%.4lf", s);
	
	
    return 0;
}