// (c) Tivole

// 1124

#include <stdio.h>

int main(void){

	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("a");
		for(int j=0; j<n-i-1; j++) printf(" ");
		for(int j=0; j<i+1;   j++) printf("%c", (char) j + (int)'a');
		printf("\n"); 
	}
	
	return 0;
}