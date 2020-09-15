// (c) Tivole

// 1289

#include <stdio.h>

int main(void){
	
	long a, b, c;
	
	scanf("%ld %ld %ld", &a, &b, &c);
	
	printf("%ld", a*b+b*c+c*a);
	
	return 0;
}