// (c) Tivole

// 571

#include <stdio.h>

void bubblesort(int arr[], int size){
	for(int i=0; i<size-1;i++){
		for(int j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a%b);
}

int main(void){
	int n, x;
	
	scanf("%d", &n);
	
	int nums[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &nums[i]);
	}
	
	bubblesort(nums, n);
	x = nums[0];
	
	for(int i=1; i<n; i++){
		x = gcd(x, nums[i]);
	}
	
	printf("%d", x);
	
	return 0;
}