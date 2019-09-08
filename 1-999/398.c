// (c) Tivole

// 398

#include <stdio.h>

int main(void){
	
	int n, k, i = -1;
	scanf("%d", &n);
	n++;
	do{
		i++;
		k = 1 + i * (i + 1) / 2;
	}while(k < n);
	
	printf("%d", i);
	
	return 0;
}