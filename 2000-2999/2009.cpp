// (c) Tivole

#include <iostream>
#include <cstdlib>
using namespace std;

long rasst(int x1, int y1, int x2, int y2) {
	return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main() {

    int n, i, j;
    short int **a = NULL;
    long ans = 0, x_sum2 = 0, x_sum = 0, y_sum = 0, y_sum2 = 0, SUM = 0;

    scanf("%d", &n);

	a = (short int**)malloc(n * sizeof(short int*));
	for(i = 0; i < n; i++) a[i] = (short int*)malloc(2 * sizeof(short int));

	for(i = 0; i < n; i++) scanf("%d%d", &a[i][0], &a[i][1]);

	for(i = 0; i < n; i++) {
		x_sum += a[i][0];
		y_sum += a[i][1];
		x_sum2 += ((a[i][0])*(a[i][0]));
		y_sum2 += ((a[i][1])*(a[i][1]));
	}

	ans = (-1)*x_sum*x_sum + n*x_sum2 + (-1)*y_sum*y_sum + n*y_sum2;
	printf("%ld\n", ans);
	
    return 0;
}