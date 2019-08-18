// (c) Tivole

// 939

#include <stdio.h>
#include <math.h>
int main(void){
	int number;
	int n1, n2;
	int otvet;
	scanf("%d", &number);
	number = fabs(number);
	n1 = number%10;
	n2 = number/10;
	otvet = (n1+n2)*(n1+n2);
	printf("%d", otvet);
	
	return 0;
}