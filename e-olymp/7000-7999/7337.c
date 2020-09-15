// (c) Tivole

// 7337

#include <stdio.h>

void quickSort(int *A, int min, int max){
	int Lft, Rht;
	int Avr, Val;
	if(min < max){
		Lft = min;
		Rht = max;
		Avr = 0.5*(A[Lft]+A[Rht]);
		do{
			while(A[Lft] < Avr) Lft++;
			while(A[Rht] > Avr) Rht--;
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

int main(){
  int n[3];
  for(int i=0; i<3; i++){
    scanf("%d", &n[i]);
  }

  quickSort(n, 0, 2);

  printf("%d\n", n[0] + n[2]);

	return 0;
}