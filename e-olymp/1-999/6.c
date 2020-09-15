// (c) Tivole

// 6

#include <stdio.h>

int i, max, n;
int d[15], c[15];

void recurs(int k, int s){
	int f,q,j;
	f=0;
	
	for(j=1; j<=n; j++){
		if (d[j]>=k){
			q = (d[j]-k+1)*c[j];
			f = d[j]; 
			d[j]=0;

			recurs(k+1,s+q);
			
			d[j]=f; 
			f=1;
		}
		if (f==0)
			if (max<s) max = s;
	}
}

int main(void){
	
	scanf("%d", &n);

	for(i=1; i<=n; i++){
		scanf("%d %d", &d[i], &c[i]); 
	}
	
	recurs(1,0);
	printf("%d", max);
	
	return 0;
}