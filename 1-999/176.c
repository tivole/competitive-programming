// (c) Tivole

// 176

#include <stdio.h>

int main(void){

	int n, Max, count_max = 1, tmp;
	scanf("%d %d", &n, &Max);
	for (int i = 1; i < n; i++){
		scanf("%d", &tmp);
		if (tmp > Max){
			Max = tmp;
			count_max = 1;
		}
		else if (tmp == Max) count_max++;
	}
	
	printf("%d", count_max);
	return 0;
}