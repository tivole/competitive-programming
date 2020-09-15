// (c) Tivole

// 58

#include <stdio.h>

long nod(long a, long b) {
    return b == 0 ? a : nod(b, a % b);
}

int main(void){
	long m, n, m1, n1, km, kn, nok;
	long luza, stolk=0;
	scanf("%ld %ld", &m1, &n1);
	
	m = m1 / nod(m1, n1);
	n = n1 / nod(m1, n1);
	
	nok = (m*n) / nod(m, n);
	
	km = nok / m;
	kn = nok / n;
	
	
	if ((km % 2 == 1) && (kn % 2 == 0)) luza=2;
	if ((km % 2 == 1) && (kn % 2 == 1)) luza=3;
	if ((km % 2 == 0) && (kn % 2 == 1)) luza=4;

	stolk = (km - 1) + (kn - 1);

	printf("%ld %ld", stolk, luza);

	return 0;
}