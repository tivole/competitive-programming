// (c) Tivole

// 1952

#include <stdio.h>
#include <stdlib.h>

void quickSort(int *A, int min, int max){
	int Lft, Rht;
	int Avr, Val;
	if(min < max){
		Lft = min;
		Rht = max;
		Avr = 0.5*(A[Lft]+A[Rht]);
		do{
			while(A[Lft] > Avr) Lft++;
			while(A[Rht] < Avr) Rht--;
			if(Lft <= Rht){
				Val=A[Lft];
				A[Lft]=A[Rht];
				A[Rht]=Val;
				Lft++;
				Rht--;
			}
		}while(Lft<=Rht);
		quickSort(A, min, Rht);
		quickSort(A, Lft, max);
	}
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  int *m = (int*)malloc(n*sizeof(int));
  int *k = (int*)malloc(n*sizeof(int));
  for(int i=0; i<n; i++) {
    scanf("%d", &m[i]);
    k[i] = m[i];
  }

  quickSort(m, 0, n-1);

  int max = m[0];
  int min = m[n-1];

  for(int i=0; i<n; i++) {
    if(k[i] == max) {
      k[i] = min;
    }
    printf("%d ", k[i]);
  }

  return 0;
}