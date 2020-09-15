// (c) Tivole

// 110

#include <stdio.h>

int d[10001];

int dp(int param){
	if (param == 1) return 0;
	if (d[param] != -1) return d[param];
	int med = 1;

	while (med * 2 < param) if (!dp(param - med++)) return d[param] = 1;

	return d[param] = 0;
}

int main(void){
	int n;
  scanf("%d", &n);

	for (int i = 0; i <= n; i++) d[i] = -1;

	int TMP = 1;
	while (TMP * 2 < n){
		if (!dp(n - TMP)) { printf("%d\n", TMP); return 0; }
		TMP++;
	}
  printf("0\n");

  return 0;
}