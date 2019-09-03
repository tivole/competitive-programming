// (c) Tivole

// 273

#include <stdio.h>

int main(void){
	int a, b, c, q;
	scanf("%d%d%d", &a, &b, &c); 
	a = a%c;
	q = a;
	for (int i = 1; i < b; i++) q = q*a%c;
	printf("%d", q%c);
	
	return 0;
}