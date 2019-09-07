// (c) Tivole

// 1316

#include <stdio.h>
#include <math.h>
#define MAX 100001

double res, logFact[MAX], ans[MAX];
int i, n;

int main(void){
	res = logFact[1] = 0.0;
	for (res = 0, i = 2; i < MAX; i++){
		res += log(i);
		logFact[i] = res;
	}

	for (i = 2; i < MAX; i += 2){
		res = logFact[i - 2] - 2 * logFact[i / 2 - 1] - (i - 2)*log(2.0);
		ans[i] = exp(res);
	}

	while (scanf("%d", &n) == 1) printf("%.8lf\n", 1 - ans[n]);

	return 0;
}