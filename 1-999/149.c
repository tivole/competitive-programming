// (c) Tivole

// 149

#include <stdio.h>
#include <math.h>

using namespace std; 

unsigned int factorial(unsigned int n){ 
	const double pi = 3.14159265358979323846, e = 2.7182818284590452354; 

	if (n == 1 || n == 0) 
 		return 1; 
 	else 
 		return ceil(log10(2 * pi * n) / 2 + n * (log10(n / e))); //Formula Stirling
 } 


 int main(){ 
	unsigned int n; 
 	scanf("%d", &n);
 	printf("%d", factorial(n));
 	return 0; 
 }