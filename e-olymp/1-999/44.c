// (c) Tivole

// 44

#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
	return a > b ? b : a;
}

const int m = 5001;

int main(void){
	int n;
	scanf("%d", &n);
	int a[m+1];
	for(int i=0; i<= m; i++)
	a[i] = m;
	a[1] = 1;
	for(int i=1; i<n; i++){
		for(int j=1, k; (k=i+j) <=n; j++)
			a[k] = min(a[k], a[i] + a[j]);
		for(int j=1, k; (k=i*j)<=n; j++)
			a[k] = min(a[k], a[i] + a[j]);
	}
	printf("%d\n", a[n]);
}