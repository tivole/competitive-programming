// (c) Tivole

// 488

#include <stdio.h>

int main(void){
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		if (i % 2){
			printf("%d", (i - 1)*n + 1);
			for (int j = (i - 1)*n + 2; j <= i*n; j++) printf(" %d", j);
		}else{
			printf("%d", i*n);
			for (int j = i*n - 1; j >= (i - 1)*n + 1; j--) printf(" %d", j);
		}

		printf("\n");
	}
	return 0;
}