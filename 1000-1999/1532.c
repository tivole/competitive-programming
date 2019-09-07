// (c) Tivole

// 1532

#include <stdio.h>

long n, cat[51];


void countPerfect(int n){
	cat[0] = cat[1] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 0; j < i; j++)
			cat[i] += cat[j] * cat[i - j - 1];
}

int main(void) {
	countPerfect(50);
	while (scanf("%d", &n) == 1) printf("%ld\n", cat[n / 2]);

	return 0;
}