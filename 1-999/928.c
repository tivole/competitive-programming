// (c) Tivole

// 928

#include <stdio.h>
#include <stdlib.h>

void bublesort(int a[], int size){
	int i, j;
	
	for(i=0; i<size; i++){
		for(j=1; j<size-i; j++){
			if(a[j-1] > a[j]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1]  = temp;
			}
		}
	}
}

int main()
{
    int lenght, a[100], otvet;
    
    scanf("%d", &lenght);
    int x;
    for(x=0; x<lenght; x++){
		scanf("%d", &a[x]); 
	}
    
    bublesort(a, lenght);
    
    otvet = a[0] + a[lenght-1];
    
    printf("%d", otvet);
    
    
    return 0;
}