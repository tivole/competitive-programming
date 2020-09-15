// (c) Tivole

// 5050

#include <stdio.h>

void swap(int a[], int b[], int length){
	for(int i=0; (length-(i+1))!=(-1); i++){
		a[i] = b[length-(i+1)];
		
	}
}

 int main(void)
 {
 	int a[10000];
 	a[0]=2;
 	int b[10000];
 	int length = 1;
 	int carrier=0;
 	int j=0, n;
 	
 	scanf("%d", &n);
 	
 	
 	
 	for(int x=1; x<n; x++){
 		for(int i=(length-1); i>=0; i--){
 			int t=a[i]*2;
 			if(t>9){
 				b[j]=t-10+carrier;
 				carrier=1;
 			}else{
 				b[j]=t+carrier;
 				carrier=0;
 			}
 			j++;
 		}
 		if(carrier==1){
 			b[j]=1;
 			carrier=0;
 			j++;
 			length++;
 		}
 		j=0;
 	
 		swap(a, b, length);
 	}
 	
 	swap(a, b, length);
 	
 	if(n==0){
 		printf("1");
 	}else if(n==1){
 		printf("2");
 	}else{
 		for(int i=(length-1); i>=0; i--){
 			printf("%d", b[i]);
 		}
 	}
 	
 	return 0;
 }