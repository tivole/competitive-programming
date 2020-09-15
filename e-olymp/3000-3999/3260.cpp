// (c) Tivole

// 3260

#include <iostream>
#include <cstdio>

long factorial(long);

int main() {
	
	long n, k;
	
	scanf("%ld%ld", &n, &k);
	printf("%ld\n", (factorial(n)) / (factorial(n - k)*factorial(k)));
	
	return 0;
}

long factorial(long x) {
	long f = 1;
	
	for (long i = 1; i <= x; i++) {
		f *= i;
	}
	
	return f;
}
