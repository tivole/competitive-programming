// (c) Tivole

// 446

#include <stdio.h>

long long n, ans = 0;

int main(void){
	scanf("%lld", &n);

	for (int i = 1; i < n; i++) if (n / i == n % i) ans++;
	printf("%lld\n", ans);
	return 0;
}