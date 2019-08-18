// (c) Tivole

// 935

#include <stdio.h>
#include <math.h>
int main(void){
	int number;
	int n1, n2, n3;
	scanf("%d", &number);
	number = fabs(number);
	n1 = number%10;
	n2 = (number/10)%10;
	n3 = number/100;
	printf("%d\n%d\n%d", n3, n2, n1);
	
	return 0;
}