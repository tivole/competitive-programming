// (c) Tivole

// 157

#include <stdio.h>
 
 int main(void)
 {
 	int n, t=0;
 	scanf("%d", &n);
 	
 	for(int i=1; i<=n; i++){
 		for(int j=i+2; j<=n; j++){
 			t++;
 		}
 	}
 	
 	
 	printf("%d", t*2);
 	
 	
 	return 0;
 }