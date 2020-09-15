// (c) Tivole

// 1506

#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c, c1, d, x, y, Left, Right;
	while (scanf("%lf %lf %lf", &x, &y, &c) == 3){
		
		Left = 0;
		if (x < y) Right = x;
		else Right = y;

		d = (Left + Right) / 2;

		do{
			a = sqrt(x*x - d*d);
			b = sqrt(y*y - d*d);
			c1 = 1 / (1 / a + 1 / b);

			if (c1 < c) Right = (Left + Right) / 2;
			else Left = (Left + Right) / 2;
			
			d = (Left + Right) / 2;
		} while (fabs(c1 - c) > 0.00001);
		printf("%.3lf\n", d);
	}
	return 0;
}