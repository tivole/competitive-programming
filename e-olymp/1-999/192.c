// (c) Tivole

// 192

#include <stdio.h>

int fibonacci(int n){
	int a[110];
	a[1] = 1;
	a[2] = 1;
	for(int i=3; i<=n; i++){
		a[i] = a[i-2] + a[i-1]; 
	} 
	return a[n];
}

int prime(int p){
	if(p<2)
		return 0;
	else if(p == 2)
		return 1;
	else if(p%2 == 0)
		return 0;
		
	int d =3;
	while(d*d <= p){
		if(p%d == 0){
			return 0;
		}
		d +=2;
	}
	return 1;
}

int main(void){
	int n, f[12];
	int i=1, j=1;
	scanf("%d", &n);
	
	while(i != 12){
		if(prime(fibonacci(j)) == 1){
			f[i] = fibonacci(j);
			i++;
		}
		j++;
	}
	
	
	printf("%d\n", f[n]);
	
	return 0;
}