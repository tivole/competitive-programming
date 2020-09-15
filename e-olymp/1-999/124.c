// (c) Tivole

// 124

#include <stdio.h>

int main(void){
	int n;
	long long  p, s;
	
	while(scanf("%d", &n) == 1){
		p = n*4;
		s = n*n;
		printf("%lld %lld\n", p, s);
	}
	
	return 0;
}