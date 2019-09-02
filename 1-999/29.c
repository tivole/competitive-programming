// (c) Tivole

// 29

#include <stdio.h>

long obr(long x){
	
	long y=0;
	while(x){
		y*=10;
		y+=x%10;
		x/=10;
	}
	
	return y;
}

long polindrom(long m){
	if(obr(m) == m)
		return 1;
	else
		return 0;
}


int main(void){
	
	long m;
	scanf("%ld", &m);
	
	
	long i=0;
	while(!polindrom(m)){
		m = m + obr(m);
		i++;
	}
	
	
	printf("%ld\n", i);
	
	return 0;
}