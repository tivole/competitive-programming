// (c) Tivole

// 358

#include <stdio.h>

int main(void){
	long long n, answer = 0;
	scanf("%lld", &n);

	if (n!=0)
	while (n!=0){
		switch (n % 10){
			case 0: answer += 6; break;
			case 1: answer += 2; break;
			case 2: answer += 5; break;
			case 3: answer += 5; break;
			case 4: answer += 4; break;
			case 5: answer += 5; break;
			case 6: answer += 6; break;
			case 7: answer += 3; break;
			case 8: answer += 7; break;
			case 9: answer += 6; break;
		}
		n /= 10;
	}else answer = 6;

	printf("%lld\n", answer);
	
	return 0;
}