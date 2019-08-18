// (c) Tivole

// 10

#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	double vedro = 0;
	double s = n;
	int k = 0;
	while(vedro<=0.5){
		vedro = vedro + 1.0/s;
		k++;
		s = s - 1;
	}
	
	printf("%d", n-k+1);
	return 0;
}