// (c) TIvole

// 5054

#include <stdio.h>

int main(void){
	
	int year;
	scanf("%d", &year);
	
	if(year%400==0){
		printf("YES");
		return 0;
	}
	if((year%4==0)&&(year%100!=0)){
		printf("YES");
		return 0;
	}
	
	printf("NO");
	return 0;
}