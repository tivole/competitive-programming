// (c) Tivole

// 7817

#include <stdio.h>

int main(void) {
	int n;
  scanf("%d", &n);
	long res = 1;
	for (int i = 0; i < n; i++) res *= 5;
	printf("%ld\n", res);
	return 0;
}