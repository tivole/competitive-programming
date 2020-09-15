// (c) Tivole

// 1142

#include <stdio.h>

int main(void) {
	
	long a, b;
	
	scanf("%ld%ld", &a, &b);
	
	if(b == 0) {
		printf("ERROR\n");
	}else {
		printf("%ld\n", a/b);
	}
	
	return 0;
}