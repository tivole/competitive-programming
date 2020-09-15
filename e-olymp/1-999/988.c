// (c) Tivole

// 988

#include <stdio.h>

int max(int x, int y){
	return x >= y ? x : y;
}

int main(void){
	int n, d[1000], mas[1000], ans;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &mas[i]);

	for (int i = 0; i < n; i++){
		d[i] = 1;
		for (int j = 0; j < i; j++) if (mas[j] < mas[i]) d[i] = max(d[i], d[j] + 1);
	}

	ans = d[0];

	for (int i = 0; i < n; i++) ans = max(ans, d[i]);

	printf("%d", ans);
	
	return 0;
}