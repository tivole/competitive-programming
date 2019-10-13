// (c) Tivole

#include <iostream>
#include <cstdio>

#define MAX 100000

using namespace std;

int main() {
	
	long n, a, b, i, ans = 0, x[MAX], delta_x[MAX];
	
	scanf("%ld%ld%ld", &n, &a, &b);
	
	for (i = 0; i < n; i++) {
		scanf("%ld", &x[i]);
		// printf("x[%ld] = %ld\n", i, x[i]);
	}
	
	for (i = 0; i < n-1; i++) {
		delta_x[i] = x[i+1] - x[i];
		// printf("delta_x[%ld] = %ld\n", i, delta_x[i]);
	}
	
	for (i = 0; i < n-1; i++) {
		if (delta_x[i] * a < b) {
			ans += a * delta_x[i];
		}else {
			ans += b;
		}
	}
	
	printf("%ld\n", ans);
	
	return 0;
}
