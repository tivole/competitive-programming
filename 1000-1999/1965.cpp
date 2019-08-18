// (c) Tivole

// 1965

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int biSearch(int *a, int l, int r, int x) {
	int m;
	while(l <= r) {
		m = l + (r-l)/2;
		
		if(a[m] == x) return m;
		else if(a[m] > x) l = m+1;
		else r = m-1;
		
	}
	
	return l;
}


int main() {
	
	int n, m, x, i, *a = NULL;
	
	scanf("%d", &n);
	
	a = (int*)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	
	scanf("%d", &x);
	
	m = biSearch(a, 0, n-1, x);
	
	while(x == a[m]) m++;
	
	printf("%d\n", m+1);

	
	return 0;
}