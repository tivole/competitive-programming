// (c) Tivole

// 954

#include <stdio.h>
#include <math.h>

int main(void){
	double a, b, H;
	scanf("%lf %lf %lf", &a, &b, &H);
	printf("%.2lf\n", 2*(a+b)*hypot(a/2 - b/2, H));
	
	return 0;
}