// (c) Tivole

// 141

#include <stdio.h>

long sum(long x){
	long y=0;
	while(x){
		y+=x%10;
		x/=10;
	}
	
	return y;
}

int main(void){
	
	long a, b;
	scanf("%ld %ld", &a, &b);
	
	
	long min = sum(a);
	int t=0;
	for(long i=a; i<=b; i++){
		if(sum(i)<min){
			t=0;
			min = sum(i);
		}
		if(sum(i)==min)
		{
			t++;
		}
	}
	
	printf("%d", t);
	
	return 0;
}