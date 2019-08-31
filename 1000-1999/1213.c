// (c) Tivole

// 1213


#include <stdio.h>
#include <math.h>
int main(void){

	int a, b, c, d;
	scanf("%d^%d %d^%d", &a, &b, &c, &d);
	
	if(b*log(a) < d*log(c)) printf("%d^%d\n", c, d);
	else printf("%d^%d\n", a, b);
	
	return 0;
}