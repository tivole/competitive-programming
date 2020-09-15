// (c) Tivole

// 4

#include <stdio.h>
#include <math.h>

int main(void) {
	double x1, x2, y1, y2, r1, r2, rasst;
	int ans;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &r1, &x2, &y2, &r2);
	rasst = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	if((x1 == x2) && (y1 == y2)){
		if (r1 == r2) {
			ans = -1;
		} else {
			ans = 0;
		}
	} else {
		if (rasst == (r1+r2)) {
			ans = 1;
		} else if (rasst == fabs(r2-r1)) {
			ans = 1;
		} else if (rasst > (r1+r2)) {
			ans = 0;
		} else if (fabs(r2-r1) > rasst) {
			ans = 0;
		} else if (((r1+r2)-rasst) > 0) {
			ans = 2;
		}
	}
	printf("%d", ans);
	
	return 0;
}