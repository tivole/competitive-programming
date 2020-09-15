// (c) Tivole

// 133

#include <stdio.h>


int main(void){
	
	int n, o=0;
	scanf("%d", &n);
	
	if(n%2==1){
		for(int i=n; i>=1; i-=2){
			o = o + i*4;
		}
	}else{
		for(int i=n; i>=1; i-=2){
			o = o + i*4;
		}
		o++;
	}
	printf("%d", o);
	
	return 0;
}