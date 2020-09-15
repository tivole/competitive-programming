// (c) Tivole

// 518

#include <stdio.h>

int main(void){
	
	long long n, a, b;
	long long r[100];
	scanf("%lld", &n);
	
	for(long i=0; i<n; i++){
		scanf("%lld %lld", &a, &b);
		r[i] = a + b;
	}
	
	for(long i=0; i<n; i++){
		printf("%lld\n", r[i]);
	}
	
	return 0;
}