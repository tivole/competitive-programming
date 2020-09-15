// (c) Tivole

// 388

#include <stdio.h>

int main(void){
	
	long n;
	scanf("%ld", &n);
	
	int t=0;
	while(n!=1){
		if(n%2 == 0){
			n/=2;
		}else{
			n+=1;
		}
		t++;
	}
	
	printf("%d", t);
	
	return 0;
}