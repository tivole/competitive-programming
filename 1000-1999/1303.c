// (c) Tivole

// 1303

#include <stdio.h>
#include <string.h>
#include <algorithm>


using namespace std;



int *m;
long i, n, swaps;


void merge(int *a, int bL, int bR, int cL, int cR){

	int i = 0, Left = bL, len = cR - bL + 1;

	int *res = new int[len];
	while (bL <= bR && cL <= cR)
		if (a[bL] <= a[cL])  res[i++] = a[bL++];
		else res[i++] = a[cL++], swaps += bR - bL + 1;

		while (bL <= bR) res[i++] = a[bL++];
		while (cL <= cR) res[i++] = a[cL++];


		memcpy(a + Left, res, len * sizeof(int));
		delete[] res;
}

void mergeSort(int *a, int left, int right){
	if (left >= right) return;

	int middle = (left + right) / 2;

	mergeSort(a, left, middle);
	mergeSort(a, middle + 1, right);
	merge(a, left, middle, middle + 1, right);
}

int main(void) {
	while (scanf("%d", &n), n){
		m = new int[n];
		for (swaps = i = 0; i < n; i++) scanf("%d", &m[i]);
		mergeSort(m, 0, n - 1);
		printf("%ld\n", swaps);
		delete[] m;
	}
	return 0;
}