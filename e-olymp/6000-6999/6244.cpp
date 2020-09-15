// (c) Tivole

// 6244

#include <iostream>
#include <cstdlib>

using namespace std;

bool ispow2(int a){
	int k=0;
	for(int t=1; t!=0; t=t<<1)
		if(a&t) k++;
	if(k==1) return true;
	return false;
}

int chetnost(int a){
	int k=0;
	for(int t=1; (a&t)==0; t=t<<1)
		k++;
	return k;
}

int comp(const void *ap, const void *bp){
	int a=*((int*)ap), b=*((int*)bp);
	int aa, bb;
	aa = ispow2(a);
	bb = ispow2(b);
	if(aa==true && bb==false) return 1;
	else if(aa==false && bb==true) return -1;
	else if(aa==true && bb==true) {
		if(a<b) return 1;
		else if(a>b) return -1;
		return 0;
	}
	else {
		aa = chetnost(a);
		bb = chetnost(b);
		if(aa>bb) return 1;
		else if(aa<bb) return -1;
		else {
			if(a<b) return -1;
			else if(a>b) return 1;
			else return 0;
		}
	}
}


int main() {
	int n, i, tests;
	
	scanf("%d", &tests);
	int a[256];
	
	for(int t=0; t<tests; t++) {
		n=0;
		i=0;
		while(1) {
			cin >> a[i];
			if (a[i] == 0) break;
			i++;
			
		}
		n=i;
		qsort((void*)a, n, sizeof(int), comp);
	
		for (i = 0; i < n; i++) {
			if(i != (n-1)) printf("%d ", a[i]);
			else printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}