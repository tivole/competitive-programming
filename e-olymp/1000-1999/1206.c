// (c) Tivole

// 1206

#include <stdio.h>


long f91(long n){
	if(n<=100){
		return f91(f91(n + 11));
	}else{
		return n - 10;
	}
}

int main(void){
	
	long n;
	scanf("%ld", &n);
	
	printf("%ld", f91(n));
	
	return 0;
}