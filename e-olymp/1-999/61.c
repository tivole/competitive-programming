// (c) Tivole

// 61

#include <stdio.h>
#include <math.h>

int main(void) {
	
	double s = 0, x, y, x1, y1;
	int time;
	
	scanf("%lf%lf", &x, &y);
	
	while(scanf("%lf%lf%lf%lf", &x, &y, &x1, &y1) == 4) {
		s += sqrtf((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y));
	}
	
	time = (int)(3 * s / 500 + 0.5);
	printf("%d:%d\n", time / 60, time % 60);

	return 0;
}