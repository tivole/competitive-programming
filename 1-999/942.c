// (c) Tivole

// 942

#include <stdio.h>
#include <math.h>

int main(void) {
	double ax, ay, bx, by, cx, cy, dx, dy;
	double ox, oy;
	double ac, bd;
	
	scanf("%lf %lf", &ax, &ay);
	scanf("%lf %lf", &bx, &by);
	scanf("%lf %lf", &cx, &cy);
	scanf("%lf %lf", &dx, &dy);
	
	ac = sqrt((cx - ax)*(cx - ax) + (cy - ay)*(cy - ay));
	bd = sqrt((bx - dx)*(bx - dx) + (by - dy)*(by - dy));
	ox = (dx + bx)/2;
	oy = (dy + by)/2;
	
	printf("%.3lf %.3lf\n%.3lf %.3lf", ox, oy, ac, bd);
	
	return 0;
}