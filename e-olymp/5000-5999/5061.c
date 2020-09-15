// (c) Tivole

// 5061

#include <stdio.h>

int n, d[500][500];

int max(int a, int b){
	return a > b ? a : b;
}

int main(void){
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) scanf("%d", &d[i][j]);

	for (int i = 1; i < n; i++) d[0][i] += d[0][i - 1];
	for (int i = 1; i < n; i++) d[i][0] += d[i - 1][0];
	for (int i = 1; i < n; i++)
		for (int j = 1; j < n; j++) d[i][j] += max(d[i - 1][j], d[i][j - 1]);


	printf("%d", d[n - 1][n - 1]);
	return 0;
}