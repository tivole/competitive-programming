// (c) Tivole

// 1504

#include <stdio.h>
#include <math.h>

int main(void){

	double a, b, c, d, p, s, r;
	int i = 0, n; 
	scanf("%d", &n);

	while (n--){
		scanf("%lf%lf%lf", &p, &a, &b);
		c = p / 2 - a; d = p / 2 - b;
		if (c > 0 && d > 0){
			s = sqrt(a * b * c * d);
			r = 2 * s / p;
			printf("Case %d: %.6lf\n", ++i, r);
		}
		else printf("Case %d: Eta Shombhob Na.\n", ++i);
	}

	return 0;
}