// (c) Tivole

// 572

#include <stdio.h>

int main(void){
	long n, d = 2, cnt;
  scanf("%ld", &n);
	int star = 0;
	while (n){
		if (n % d == 0){
			cnt = 0;
			while (n % d == 0){
				cnt++;
				n /= d;
			}
			if (star) printf("*");
			printf("%ld", d);
			if (cnt > 1) printf("^%ld", cnt);
			star = 1;
		}
		d++;
		if (d*d > n && n != 1){
			if (star) printf("*");
      printf("%ld", n);
			n = 0;
		}
		if (n == 1) n = 0;
	}
	printf("\n");
  return 0;
}