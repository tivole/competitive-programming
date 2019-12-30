// (c) Tivole

// 5052

#include <stdio.h>

 int main(void)
 {
 	int t, a[100000];
 	long n;
 	
 	scanf("%ld %d", &n, &t);
 	
 	int i=0;
 	while(n!=1){
 		a[i]=n%2;
 		n/=2;
 		i++;
 	}
 	a[i]=1;
 	
 	if(a[t-1]==1){
 		printf("YES");
 	}else{
 		printf("NO");
 	}
 	
 	return 0;
 }