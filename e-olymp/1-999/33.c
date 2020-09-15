// (c) Tivole

// 33

#include <stdio.h>
#include <math.h>

long thirteen(long x){
	int prev=0;
	long y=0;
	while(x){
		y=x%10;
		x/=10;
		if(prev == 3 && y==1)
			return 0;
		prev = y;
	}
	return 1;
}

int prime(int n){
	if((n==0) || (n==1)) return 0;
	if((n==2) || (n==3)) return 1;
	if(n%2 == 0) return 0;
	int  koren = (int)sqrt(n) + 1;
	for(int i=3; i<koren; i+=2){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(void){
	int a, b;
	int t=0;
	
	scanf("%d %d", &a, &b);
	
	if(a>b){
		int c=a;
		b=b;
		b=c;
	}
	for(int i=a; i<=b; i++){
		if(thirteen(i))
			if(prime(i)) t++;
	}
	
	
	printf("%d\n", t);
	
	return 0;
}