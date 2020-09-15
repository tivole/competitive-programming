// (c) Tivole

// 248

#include <stdio.h>

int main(void){
	
	int a;
	
	scanf("%d", &a);
	
	long sum=0;
	for(int i=a; i>=0;i--){
		sum+=i; 
	}
	
	printf("%ld", sum*2+1);
	
	return 0;
}