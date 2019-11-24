// (c) Tivole

// 352

#include <stdio.h>

int main(void){

	double tmp, MIN;
	scanf("%lf", &tmp);
	MIN = tmp;

	while ((scanf("%lf", &tmp))==1){
		if (tmp < MIN) MIN = tmp;
	}

	printf("%.2lf", MIN);
	return 0;
}