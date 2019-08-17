// (c) Tivole

// 6199

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

void print(char *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%c", a[i]);
    }
    printf("\n");
}

int main() {

    int k, i, n;
    char array[51], word[51], c;

    scanf("%s", word);

    k = 0;
    n = strlen(word);

    for(i = 0; i < n; i++) {
        c = word[i];
        if(k == 0) {
            array[k] = c;
            k++;
        }else {
            if(c == ')') {
                if(array[k-1] == '(') {
                    k--;
                }else {
                    array[k] = c;
                    k++;
                }
            }else {
                array[k] = c;
                k++;
            }
        }
    }

    printf("%d\n", k);


    return 0;
}