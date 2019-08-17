// (c) Tivole

// 2392

#include <stdio.h>

void bubblesort(int arr[], int size){
	for(int i=0; i<size-1;i++)
		for(int j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
}

void swap(int *a, int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

int main(int argc, char const *argv[]) {
  int n, a[3], b[3];
  scanf("%d", &n);

  for(int i=0; i<3; i++){
    a[i] = n%10;
    n/=10;
  }

  bubblesort(a, 3);

  for(int i=0; i<3; i++)
    b[i] = a[2-i];

  if (a[0] == 0 && a[1] != 0) swap(&a[0], &a[1]);
	else if (a[0] == 0 && a[1] == 0) swap(&a[0], &a[2]);

  int ans = 100 * b[0] + 10 * b[1] + b[2];
	ans += 100 * a[0] + 10 * a[1] + a[2];

  printf("%d\n", ans);

  return 0;
}