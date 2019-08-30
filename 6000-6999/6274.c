// (c) Tivole

// 6274

#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", (-1 + (int)sqrtf(1 + 8 * (a - b))) / 2);
	return 0;
}