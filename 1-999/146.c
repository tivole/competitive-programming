// (c) Tivole

// 146

#include <stdio.h>

int n;
double answer = 0, stmp = 100;

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		answer += stmp / 2;
		stmp /= 4;
	}

	printf("%.5lf", answer);
	
	return 0;
}