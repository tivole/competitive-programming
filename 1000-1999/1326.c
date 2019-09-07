// (c) Tivole

// 1326

#include <stdio.h>

int main(void){
	unsigned long long n, o;
	scanf("%lld", &n);
	
	if(n==1){
		o = 1;
	}else if(n==2){
		o = 2;
	}else if(n==3){
		o=6;
	}else{
		o = (n)*(n-1)*(n-2);
	}
	printf("%lld", o);
	
	return 0;
}