// (c) Tivole

// 478

#include <stdio.h>

int main(void){
	long a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	
	long painted = 2*(a*b + a*c + b*c);
	long num =  a*b*c;
	
	printf("%ld %ld", num, num*6 - painted);
	
	return 0;
}