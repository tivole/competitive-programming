// (c) Tivole

// 27

#include <stdio.h>
#include <math.h>

int max(int a, int b){
	return a > b ? a : b;
}

int n, ans = 0, tmp, maxbinpow = 1;

int main(void){
	scanf("%d", &n);
	ans = n;

	while (maxbinpow * 2 < ans) maxbinpow *= 2;
	
	tmp = (n - maxbinpow) * 2 + 1;
	while (tmp != n){
		ans = max(tmp, ans);
		if (tmp > maxbinpow)
			tmp = (tmp - maxbinpow) * 2 + 1;
		else
			tmp *= 2;
		
	}
	printf("%d", ans);
	return 0;
}