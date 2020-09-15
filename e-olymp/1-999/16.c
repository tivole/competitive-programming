// (c) Tivole

// 16

#include <stdio.h>
#include <math.h>

int main(void){
	long int S, K, A, B, N, ans;
	scanf("%ld %ld %ld %ld", &S, &K, &A, &B);
	
	if(S*A == B)
		printf("%ld", S*K);
	else{
		N = 1;
		while(N<1001){
			if((long int)(fabs(S*A-B)) % N == 0){
				ans = ((B-S*A) / N) + S*K;
				if( (ans>=0) && (A>N*K) ){
					printf("%ld", ans);
					break;
				}
			}
			N++;
		}
		if(N==1001)
			printf("-1");
	}
	
	return 0;
}