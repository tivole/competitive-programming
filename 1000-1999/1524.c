// (c) Tivole

// 1524

#include <stdio.h>
#include <string.h>
#define MAX 71

int i, j, n, t, p, tests, m[MAX][MAX];

int main(void) {
	memset(m, 0, sizeof m);

	for (i = 0; i < MAX; i++) m[1][i] = m[i][0] = 1;

	for (i = 2; i < MAX; i++)
		for (j = 1; j < MAX; j++) m[i][j] = m[i][j - 1] + m[i - 1][j];

	scanf("%d", &tests);
	while (tests--){
		scanf("%d %d %d", &n, &t, &p);
		t -= n * p;
		printf("%d\n", m[n][t]);
	}

	return 0;
}