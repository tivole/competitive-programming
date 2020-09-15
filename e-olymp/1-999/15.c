// (c) Tivole

// 15

#include <stdio.h>
#include <stdlib.h>

int Max(int, int);
int mouse(int**, int, int);
void way(int**, int, int);

int main(void){
	int **A, m, n, i, j;
	scanf("%d%d", &m, &n);
	A = (int**)malloc((m+1) * sizeof(int*));
	for(i=0; i<=m; i++) A[i] = (int*) malloc((n+1) * sizeof(int));
	for(i=0; i<=m; i++) A[i][0] = -1;
	for(i=0; i<=n; i++) A[0][i] = -1;
	for(i=m; i>0; i--)
	for(j=1; j<=n; j++) scanf("%d", &A[i][j]);
	mouse(A,m,n);
	way(A,m,n);
	return 0;
}

int Max(int a, int b){
	return a > b ? a : b;
}

int mouse(int **A, int m, int n){
	int i, j;
	for(i=2; i<=m; i++) A[i][1] += A[i-1][1];
	for(i=2; i<=n; i++) A[1][i] += A[1][i-1];
	for(i=2; i<=m; i++)
	for(j=2; j<=n; j++) A[i][j] += Max(A[i-1][j], A[i][j-1]);
	
	return A[m][n];
}

void way(int **A, int m, int n){
	int i=m, j=n, stack_size=0;
	char *stack;
	stack = (char*)malloc((m+n-2)*sizeof(char));
	while(1){
		if(i==1&&j==1) break;
		if(A[i-1][j]>A[i][j-1]) stack[stack_size] = 'F', i--;
		else stack[stack_size] = 'R', j--;
		stack_size++;
	}
	
	for(i=stack_size-1; i>=0; i--) printf("%c", stack[i]);
	printf("\n");
}