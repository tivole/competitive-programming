// (c) Tivole

// 137

#include <stdio.h>


int nod(int x, int y){
	while (x*y != 0){
		if (x < y) y = y%x;
		else x = x%y;
	}

	return x + y;
}


int main(void){
	int n, i, ans, m[30000];
	scanf("%d", &n);
	for(i=0; i<n; i++) scanf("%d", &m[i]);
	ans = m[0];
	for(i=1; i<n; i++) ans = nod(ans, m[i]);
	
	printf("%d", ans);
	
	return 0;
}