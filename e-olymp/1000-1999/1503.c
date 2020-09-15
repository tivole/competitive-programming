// (c) Tivole

// 1503

#include <stdio.h>
#include <math.h>
#define MAX 1001

void sort(double arr[], int size){
	for(int i=0; i<size-1;i++){
		for(int j=1; j<size-i; j++){
			if(arr[j-1]>arr[j]){
				double temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}


int main(void) {

	double alfa, s, sq, r2, res, d[MAX];
	int n, r, points;
	while (scanf("%d %d", &n, &r), n + r){

		for (int i = 0; i < n; i++) scanf("%lf", &d[i]), d[i] = d[i] * M_PI / 180;

		sort(d, n);
		res = M_PI*r*r*n * (n - 1) * (n - 2) / 6;
		r2 = r * r / 2.0;
		sq = M_PI * r * r;

		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++){
				alfa = d[j] - d[i];

				if (alfa < M_PI) s = r2 * (alfa - sin(alfa));

				else{
					alfa = 2 * M_PI - alfa;
					s = sq - r2 * (alfa - sin(alfa));
				}
				points = n - (j - i + 1);
				res -= s * points;
				points = n - points - 2;
				res -= (sq - s) * points;
			}
		printf("%.0lf\n", res);
	}
	return 0;
}