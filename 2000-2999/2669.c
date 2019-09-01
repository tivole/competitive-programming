// (c) Tivole

// 2669

#include <stdio.h>

int main(void){
    int n,m, mas[50][50];
    scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
            scanf("%d", &mas[i][j]);

    printf("%d %d\n", m, n);
	
    for (int i = 0; i < m; i++){
        printf("%d", mas[n-1][i]);
		for (int j = n-2; j >=0; j--)
            printf(" %d", mas[j][i]);
        printf("\n");
	}

    return 0;
}