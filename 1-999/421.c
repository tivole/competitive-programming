// (c) Tivole

// 421

#include <stdio.h>

int main(void){
  int c = 0;
	double k, l;
  scanf("%lf %lf", &l, &k);
	l /= k;
	while (l > 1){
		l /= k;
		c++;
	}
	printf("%d\n", c);

  return 0;
}