// (c) Tivole

// 46

#include <stdio.h>

int main(void){
	long long n,a = 1,b = 1, k = 2,t, Suma = 2;
	scanf("%lld", &n);
	while (n - Suma >=a + b){
		t = a + b;
		a = b;
		b = t;
		Suma += b;
		k++;
	}
  printf("%lld\n", k);

  return 0;
}