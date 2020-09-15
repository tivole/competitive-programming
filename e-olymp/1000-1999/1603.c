// (c) Tivole

// 1603

#include <stdio.h>
#include <math.h>

long n, sum = 0;

int main(void){
  scanf("%ld", &n);
	n = fabs(n);
	while (n){
		sum += n % 10;
		n /= 10;
	}
  printf("%ld\n", sum);

  return 0;
}