// (c) Tivole

// 4078

#include <iostream>

using namespace std;

int main() {

    int n, col_num, i, j;
    double denum, ans, mult, sum;

    while(scanf("%d%d", &col_num, &n) == 2) {
        int *col = new int[col_num];
        for(i = 0; i < col_num; i++) {
            scanf("%d", &col[i]);
        }
        sum = 0;
        for(i = 0; i < col_num; i++) {
            sum += col[i];
        }
        denum = 1;
        for(i = 0; i < n; i++) {
            denum *= (sum - i);
        }
        ans = 0;
        for(i = 0; i < col_num; i++) {
            if(col[i] >= n) {
                mult = 1;
                for(j = 0; j < n; j++) {
                    mult *= (col[i] - j);
                }
                ans += (double)mult/denum;
            }
        }
        printf("%.4lf\n", ans);
        delete col;
    }


    return 0;
}