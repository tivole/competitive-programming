// (c) Tivole

// 2440

#include <iostream>

using namespace std;


void quickSort(int *a, int l, int r) {
    int t, p, i = l, j = r;
    p = a[(l+r)/2];
    while(i <= j) {
        while(a[i] > p) i++;
        while(a[j] < p) j--;
        if(i <= j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }
    if(i < r) quickSort(a, i, r);
    if(j > l) quickSort(a, l, j);
}

int main() {

    int t, i, j, n, a[10];

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        for(j = 0; j < 10; j++) {
            scanf("%d", &a[j]);
        }
        quickSort(a, 0, 9);
        printf("%d %d\n", n, a[2]);
    }


    return 0;
}