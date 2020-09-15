// (c) Tivole

// 8316

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
  char txt[100];
  gets(txt);
  int *t = (int*)malloc(strlen(txt)*sizeof(int));

  for(int i=0; i<strlen(txt); i++)
    t[i] = (int)txt[i];

  quickSort(t, 0, strlen(txt)-1);

  for(int i=0; i<strlen(txt); i++)
    printf("%c", (char)t[i]);
  printf("\n");
  for(int i=strlen(txt)-1; i>=0; i--)
    printf("%c", (char)t[i]);
  printf("\n");

  return 0;
}