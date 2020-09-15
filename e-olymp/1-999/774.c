// (c) Tivole

// 774

#include <stdio.h>
#include <math.h>

int main(void){
	
	int r, w, l;
	scanf("%d %d %d", &r, &w, &l);
	
	printf(sqrt(w*w + l*l) <= 2*r ? "YES" : "NO");
	
	return 0;
}