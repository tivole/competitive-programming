// (c) Tivole

// 992

#include <stdio.h>

int main(void){
	int n, ans = 0, tmp;
	scanf("%d", &n);
	for (int i = 0; i < n*n; i++){
		scanf("%d", &tmp);
		ans += tmp;
	}
	
	printf("%d\n", ans/2);
	return 0;
}