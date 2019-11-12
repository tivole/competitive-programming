// (c) Tivole

// 20

#include <stdio.h>

int sumdigit(int x){
	int sum = 0;
	while (x > 0){
		sum = sum + x%10;
		x = x/10;
	}
	return sum;
}

int main(void){
	int n;
	scanf("%d", &n);
	int t = 0;
	while (n > 0){
		n = n - sumdigit(n);
		t++;
	}
	printf("%d\n", t);
	
	return 0;
}