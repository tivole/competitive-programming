// (c) Tivole

// 906

#include <stdio.h>
int main(void){
	int number, n1, n2, n3, otvet;
	scanf("%d", &number);
	n1 = number/100;
	n2 = (number - n1*100)/10;
	n3 = number - (n1*100 + n2*10);
	otvet = n1*n2*n3;
	printf("%d\n", otvet);
	return 0;
}