// (c) Tivole

// 6249

#include <iostream>
using namespace std;

void quick(int *a, int left, int right) {
      int i = left, j = right, pivot, tmp;
      pivot = (a[left] + a[right])/2;
      while (i <= j) {
            while (a[i] > pivot) i++;
            while (a[j] < pivot) j--;
            if (i <= j) {
                  tmp = a[i];
                  a[i] = a[j];
                  a[j] = tmp;
                  i++;
                  j--;
            }
      }
      if (left < j) quick(a, left, j);
      if (right > i) quick(a, i, right);
}

int main() {

    int n, i, max, *a = NULL;

    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quick(a, 0, n-1);

    max = a[0];
    for(i = 1; i < n; i++) {
        a[i]+=i;
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("%d\n", max+2);

    return 0;
}