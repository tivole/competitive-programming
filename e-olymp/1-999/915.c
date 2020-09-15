// (c) Tivole

// 915

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubblesort(int arr[], int size){
    int i;
	for(i=0; i<size;i++){
        int j;
		for(j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}

}

int main(void) {
    int a[3], pif1, pif2;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    bubblesort(a, 3);

    pif1 = a[2]*a[2];
    pif2 = a[0]*a[0] + a[1]*a[1];

    if(pif1 == pif2)
        printf("YES");
    else if(pif2 != pif1)
        printf("NO");
    return 0;
}