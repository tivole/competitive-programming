// (c) Tivole

// 7812

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

int main(int argc, char const *argv[]) {
  int n[4];

  for(int i=0; i<4; i++){
    scanf("%d", &n[i]);
  }

  quickSort(n, 0, 3);

  printf("%d\n", n[3]);

  return 0;
}