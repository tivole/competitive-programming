// (c) Tivole

// 479

#include <stdio.h>

int n, tmp, mas[100];

int main(void){

	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%d", &mas[i]);

	for (int i = 0; i < n; i++)	{
		tmp = mas[i];
	
		for (int j = 0; j < tmp; j++){
			for (int g = 0; g < tmp; g++){
				if (j == g || tmp - 1 - j == g) printf("X");
				else printf(" ");
			}
			if (i != n - 1 || j != tmp - 1) printf("\n");
		}
		if (i != n - 1) printf("\n");
	}

	printf("\n");
	return 0;
}