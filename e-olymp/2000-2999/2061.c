// (c) Tivole

// 2061

#include <stdio.h>

int main(void) {
	int k1, k2, n, m;
	int b, g;
	
	scanf("%d %d %d %d", &k1, &k2, &n, &m);

	for (g = n; 1; g++){
		b = g * m / n;
		if (g * m % n == 0 && b + g >= k1) break;
	}
	
	printf("%d %d %d\n", b+g, b, g);

	return 0;
}