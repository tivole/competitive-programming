// (c) Tivole

// 11

#include <stdio.h>

int main(void){
	int m, n, k, dig;
	scanf("%d%d%d", &m, &n, &k);
	dig = m/n;
	printf("%d", dig);
	for(int i = 1; i <= k; i++){
		if (i == 1)
			printf(".");
		m = (m-n*dig)*10;
		dig = m/n;
		printf("%d", dig);
	}
	
	return 0;
}