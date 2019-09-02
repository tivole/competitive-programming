// (c) Tivole

// 112

#include <stdio.h>

int main(){
	long t1, t2, t3;

	scanf("%ld%ld%ld", &t1, &t2, &t3); 

	printf("%.2f", (float)(1 / (1 / (float)t1 + 1 / (float)t2 + 1 / (float)t3)));

}