// (c) Tivole

// 280

#include <stdio.h>

int gcd(int a, int b){
	while (b){
		a %= b;
		a+=b;
		b=a-b;
		a=a-b;
	}

	return a;
}

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	
	if (n == 1 || m == 1) printf("1\n");
	else printf("%d\n", gcd(n, m));

	return 0;
}