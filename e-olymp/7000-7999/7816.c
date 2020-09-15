// (c) Tivole

// 7816

#include <stdio.h>

int main(void) {
	int t, t1;
	scanf("%d%d", &t, &t1);
	int tm = 60 * t * t / t1;
	printf("%d %d\n", tm / 60, tm % 60);
	return 0;
}