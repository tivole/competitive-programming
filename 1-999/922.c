// (c) Tivole

// 922

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubblesort(double arr[], int size){
	for(int i=0; i<size;i++){
		for(int j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				double temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	
}


int main()
{
    int a[110], b[110];
    int lenght;
    int temp;
    
    scanf("%d", &lenght);
    
    for(int i=0; i<lenght; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i =0; i<lenght; i++){
		b[i] = a[i];
	}
	
	temp = a[0];
	a[0] = a[lenght-1];
	a[lenght-1] = temp;

	for(int i=1; i<lenght; i++){
		a[i] = b[i-1];
	}

	for(int i =0; i<lenght; i++){
		printf("%d ", a[i]);
	}
	
    return 0;
}