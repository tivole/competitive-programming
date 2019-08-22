// (c) Tivole

// 960

#include <stdio.h>
#include <math.h>


int main(void){

	double R, r, H;
	scanf("%lf %lf %lf", &R, &r, &H);
	printf("%.2lf\n", M_PI*R*R + M_PI*r*r + hypot(H, R - r)*(R + r)*M_PI);
	
	return 0;
}