// (c) Tivole

// 4741

#include <stdio.h>
#include <stdlib.h>

int t=0;

void bubblesort(int *arr, int size){
  for(int i=0; i<size-1;i++)
		for(int j=1; j<size-i; j++)
			if(arr[j-1]>arr[j]){
        t++;
        int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
}

int main(int argc, char const *argv[]) {

  int n;
  scanf("%d", &n);
  int *a = (int*)malloc(n*sizeof(int));

  for(int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  bubblesort(a, n);

  printf("%d", t);

  return 0;
}