// (c) Tivole

// 1343

#include <stdio.h>

int main(void) {
	long n, f[46];
	f[0] = 1; f[1] = 3;
	for (int i = 2; i < 46; i++) f[i] = 3 * f[i - 1] - f[i - 2];
	scanf("%ld", &n);
	printf("%ld\n", f[n]);

	return 0;
}