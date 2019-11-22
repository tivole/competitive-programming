// (c) Tivole

// 247

#include <stdio.h>

int main(void){
	long long n, ans = 0, tmp;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++){
		scanf("%lld", &tmp);
		ans += (bool)(tmp & 2);
	}
	printf("%lld", ans);
	return 0;
}