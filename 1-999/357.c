// (c) Tivole

// 357

#include <stdio.h>

int main(void){

	double tmp, MAX = -1;

	while ((scanf("%lf", &tmp))==1){
		if (tmp > MAX) MAX = tmp;
	}

	printf("%.2lf", MAX);
	return 0;
}