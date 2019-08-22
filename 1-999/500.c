// (c) Tivole

// 500

#include <stdio.h>

int main(void){
	int n, l, w, h, num;
	scanf("%d", &n);
	int ans[n];
	
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &l, &w, &h);
		int num = 2*(l*h + w*h)/16;
        if ((l*h + w*h)%8 != 0) num++;
        ans[i] =  num;
	}
	
	for(int i=0; i<n; i++){
		printf("%d\n", ans[i]);
	}
	
	return 0;
}