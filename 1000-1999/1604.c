// (c) Tivole

// 1604

#include <stdio.h>
#include <math.h>

long n, d = -1;

int main(void){
  scanf("%ld", &n);
	n = fabs(n);
	if (n == 0) d = 0;
	while (n){
		if (n % 10 % 2 == 0) d *= n % 10;
		n /= 10;
	}
  if(d==-1)
    printf("%ld\n", d);
  else
    printf("%ld\n", -d);
}