// (c) Tivole

// 917

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
    double a[110];
    int lenght;
    
    scanf("%d", &lenght);
    
    for(int i=0; i<lenght; i++){
		scanf("%lf", &a[i]);
	}
	
	
	bubblesort(a, lenght);
	
	
	printf("%.2lf", 2*a[0]);
    
	
    return 0;
}