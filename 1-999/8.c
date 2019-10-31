// (c) Tivole

// 8

#include <stdio.h>

long long N, answer, M;
int main(void){
	scanf("%lld", &N); 
	M = 0;
	while (M*M < N) M++;
	M--;	
	answer += M * (M+1) * 2;
	answer += (N - M*M)*2;
	answer++;

	if (N - M*M > M) answer++;

	printf("%lld", answer);
}