// (c) Tivole

// 329

#include <stdio.h>

 int main(void)
 {
 	char str[900];
 	int t = 0;
 	while(scanf("%s", &str) == 1){
		 t++;
		 if(str[0] == '-'){
			 t--;
		 }
 	}
 	
 	printf("%d", t);
 	return 0;
 }