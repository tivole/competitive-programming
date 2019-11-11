// (c) Tivole

// 17

#include <stdio.h>
#include <math.h>

int main(void){
	long n, ans;
	scanf("%ld", &n);
	
	ans = 3*pow(2, n-1);
	printf("%ld", ans);
	
	return 0;
}