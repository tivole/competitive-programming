// (c) Tivole

// 354

#include <stdio.h>
#include <string.h>


int main(void){
	int a, n, i, m[10001];

	scanf("%d", &n);

	memset(m, 0, sizeof m);

	for (i = 0; i < n; i++){
		scanf("%d", &a);
		if (a <= n) m[a]++;
	}

	for (i = 1; i <= n; i++) if (m[i] == 0) break;
	if (i <= n) printf("%d\n", i);
	else printf("0\n");

	return 0;
}