// (c) Tivole

// 4819

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    int n, m, s, i, j, k, a, b, len_bel, ans;
    bool flag;

    scanf("%d%d%d", &n, &m, &s);

    s--;

    int array[n][m], len[m], bellman[m][2];

    // Zeroing arrays
    memset(array, 0, sizeof(array[0][0]) * m * n);
    memset(len, 0, sizeof(len));
    memset(bellman, -1, sizeof(bellman[0][0]) * m * 2);
    
    for (i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        if(a != b) array[a-1][len[a-1]++] = b - 1;
    }
    
    bellman[0][0] = s;
    bellman[0][1] = 0;
    len_bel = 1;


    for (i = 0; i < len_bel; i++) {
        for (j = 0; j < len[bellman[i][0]]; j++) {
            flag = false;
            for (k = 0; k < len_bel; k++) {
                if (array[bellman[i][0]][j] == bellman[k][0]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                bellman[len_bel][0] = array[bellman[i][0]][j];
                bellman[len_bel][1] = len_bel;
                len_bel++;
            }
        }
    }


    ans = bellman[len_bel-1][1];

    printf("%d\n", ans);

    /*
    for (i = 0; i < len_bel; i ++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", bellman[i][j]);
        }
        printf("\n");
    }
    */

    return 0;
}