// (c) Tivole

// 419

#include <stdio.h>

int max(int a, int b){
  return a>b ? a : b;
}

int func(int n){
	int t;
	for (t = 1; n != 1; t++)
		if (n % 2) n = 3 * n + 1;
		else n = n / 2;
		return t;
}

int check(int i, int j){
	int mx = 0;
	for (; i <= j; i++) mx = max(mx, func(i));
	return mx;
}

int main(void) {
	int i, j;
	while (scanf("%d %d", &i, &j) == 2){
		int tmp, itemp = i, jtemp = j;
		if (i > j) tmp = i, i = j, j = tmp;
		printf("%d %d %d\n", itemp, jtemp, check(i, j));
	}
	return 0;
}