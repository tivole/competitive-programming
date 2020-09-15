// (c) Tivole

// 1501

#include <stdio.h>
#include <math.h>

int main(void){

	double l, r, h, a1, d1, a2, d2, da, fi;
	while (scanf("%lf %lf %lf %lf %lf %lf", &r, &h, &d1, &a1, &d2, &a2) == 6){
		a1 *= M_PI / 180; a2 *= M_PI / 180;
		da = fabs(a2 - a1);
		if (da > M_PI) da = 2 * M_PI - da;
		l = sqrt(r*r + h*h);
		fi = da * r / l;
		l = sqrt(d1*d1 + d2*d2 - 2 * d1*d2*cos(fi));
		
		printf("%.2lf\n", l);
	}

	return 0;
}