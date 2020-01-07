// (c) Tivole

// 7546

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    int t, i, j, k, numOfWords, n, m;
    char word[21];

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        char **array = (char**)malloc(n * sizeof(char*));
        for(j = 0; j < n; j++) array[j] = (char*)malloc(21 * sizeof(char));
        scanf("%s", array[0]);
        numOfWords = 1;
        for(j = 1; j < n; j++) {
            scanf("%s", word);
            bool flag = true;
            for(k = 0; k < numOfWords; k++) {
                if(strcmp(word, array[k]) == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                for(m = 0; m < strlen(word); m++) array[numOfWords][m] = word[m];
                numOfWords++;
            }
        }
        delete array;
        printf("%d\n", numOfWords);
    }

    return 0;
}