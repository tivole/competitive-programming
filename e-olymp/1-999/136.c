// (c) Tivole

// 136

#include <stdio.h>
#include <math.h>
long nsd(long x, long y){
	while (x != 0 && y != 0){
		if (x > y) x = x%y;
		else y = y%x;
	}

	return x + y;
}



int main(void){
	long x1, x2, y1, y2;
	double dx, dy;
	scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
	dx = fabs(x2 - x1);
	dy = fabs(y2 - y1);
	
	printf("%ld", (nsd(dx, dy) +1));
	return 0;
}