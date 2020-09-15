// (c) Tivole

// 1601

#include <stdio.h>

long a, b;
long gcd(long A, long B){
	return B ? gcd(B, A % B) : A;
}

int main(void){
  scanf("%ld%ld", &a, &b);
	printf("%ld\n", gcd(a, b));
  return 0;
}