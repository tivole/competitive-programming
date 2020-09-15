// (c) Tivole

// 1520

#include <stdio.h>

long g(long n){
	long k = (n + 1) / 2;

	if (n == 0) return 0;

	return k * k + g(n / 2);
}

int main(void) {
	long n;

	while (scanf("%lld", &n) == 1) printf("%ld\n", g(n));

	return 0;
}