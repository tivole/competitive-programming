// (c) Tivole

// 75

#include <stdio.h>

int main(void){
	
	int a, m;
	scanf("%d %d", &a, &m);
	
    int n = 1;

    while (m > 0){
		m = m - a;
		n++;
		a++;
	}
	
	printf("%d", n-2);
	
	return 0;
}