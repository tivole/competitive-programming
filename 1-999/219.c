// (c) Tivole

// 219

#include <stdio.h>
#include <math.h>

double a, b, c, d, K, tmp;
long long answer;

int main(void){
	
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	K = a*b*c / d;
	if (modf(K, &tmp) == 0) answer = a*b*c / d;
	else answer = a*b*c / d + 1;

	printf("%lld", answer);
	return 0;
}