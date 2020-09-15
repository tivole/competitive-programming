// (c) Tivole

// 123

#include <stdio.h>

long long n, tmp, answer;
int main(){
	scanf("%lld", &n);
	tmp = 5;

	while (tmp < n){
		answer += n / tmp;
		tmp *= 5;
	}

	printf("%lld", answer);
	
	return 0;
}