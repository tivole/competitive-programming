// (c) Tivole

// 414

#include <stdio.h>
#include <math.h>

int main(void) {
	int c, i, n, res = 1;
	scanf("%d", &n);

	for (i = 2; i <= sqrt(1.0*n); i++){
		for (c = 0; n % i == 0; c++) n /= i;
		res = res * (2 * c + 1);
	}


	if (n > 1) res *= 3;
	printf("%d\n", res);

	return 0;
}