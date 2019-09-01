// (c) Tivole

// 51

#include <stdio.h>

int main(void){
	long s;
	scanf("%ld", &s);
	if(s==0){
		printf("0");
		return 0;
	}
	
	long t=1, k=0;
	while(s>t){
		k=k+1;
        t=t+k+1;
	}
	if(s<=t){
		k++;
	}
	
	printf("%ld", k);
	
	return 0;
}