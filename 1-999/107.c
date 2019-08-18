// (c) Tivole

// 107

#include <stdio.h>

int main(void){
	
	int a, n, m, k, otvet;
	scanf("%d", &a);
	
	n=a/100;
	a%=100;
	if(a>=65){n++; m=0; k=0;}
	else{
		m=a/20;
		k=a%20;
		if(k>=15){
			m++;
			k=0;
		}
	}
	 otvet = n*100 + m*30 +k*2;
	printf("%d\n", otvet);
	
	return 0;
}