// (c) Tivole

// 126

#include <stdio.h>

int main(void){
	int P, N, Q, K;
	int nP, nQ;
	
	scanf("%d %d %d %d", &N, &P, &Q, &K);
	
	if((K % (N/P)) == 0)
		nP = K / (N/P);
	else
		nP = K / (N/P) + 1;
	
	
	if(K % (N/P) != 0){
		if(((K % (N/P)) % ((N/P)/Q)) == 0){ 
			nQ = (K % (N/P)) / ((N/P)/Q);
		}else{
			nQ = (K % (N/P)) / ((N/P)/Q) + 1;
		}
	}else{
		if(((N/P) % ((N/P)/Q)) == 0){ 
			nQ = (N/P) / ((N/P)/Q);
		}else{
			nQ = (N/P) / ((N/P)/Q) + 1;
		}
	}
	
	
	printf("%d %d", nP, nQ);
	return 0;
}