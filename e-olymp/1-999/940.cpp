// (c) Tivole

// 940

#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    bool flag;
    int n, i, j, k = 1, array[100][2], element;

    scanf("%d", &n);

    scanf("%d", &element);

    array[0][0] = element;
    array[0][1] = 1;
    
    for (i = 1; i < n; i++) {
        scanf("%d", &element);

        flag = false;
        for (j = 0; j < k; j++) {
            if (element == array[j][0]) {
                array[j][1]++;
                flag = true;
                break;
            }
        }
        
        if (!flag) {
            array[k][0] = element;
            array[k++][1] = 1;
        }
        
    }

    // Checking for major element
    flag = false;
    for (i = 0; i < k; i++) {
        if (array[i][1] > n/2) {
            printf("%d\n", array[i][0]);
            flag = true;
            break;
        }
    }

    if (!flag) printf("%d\n", -1);

    return 0;
}