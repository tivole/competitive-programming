// (c) Tivole

// 108

#include <stdio.h>

void bubblesort(int arr[], int size){
	for(int i=0; i<size;i++){
		for(int j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	
}

int main(void){
	
	int a[3], many=3;
	
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	bubblesort(a, many);
	printf("%d", a[1]);
	
	return 0;
}