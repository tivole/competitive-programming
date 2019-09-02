// (c) Tivole

// 109

#include <stdio.h>

int main(void){
	int n, m;
	scanf("%d", &n);
	
	if(n < 10){
		m=n;
		printf("%d", m);
	}else if(n<=189){
		if((n-9)%2 == 0){
			m = 9+(n-9)/2;
			printf("%d", m);
		}else{
			printf("0");
		}
	}else if(n<=2889){
		if((n-189)%3 == 0){
			m = 99 + (n-189)/3;
			printf("%d", m);
		}else{
			printf("0");
		}
	}else if(n<=38889){
		if((n-2889)%4 == 0){
			m = 999 + (n-2889)/4;
			printf("%d", m);
		}else{
			printf("0");
		}
	}
	
	
	return 0;
}