// (c) Tivole

// 43

#include <stdio.h>

int main(void){
	long k, m, n, d;
	scanf("%ld %ld %ld %ld", &k, &m, &n, &d);
	
	long v = d*k*m*n;
	long a = k*m*n - k*m - k*n - m*n;
	
	if (v%a == 0) printf("%ld", (v/a));
    else printf("-1");
	return 0;
}