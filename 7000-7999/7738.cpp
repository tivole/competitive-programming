// (c) Tivole

// 7738

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    bool *alreadySolved = NULL;
    int SendTime, *array = NULL, ans = 0, numOfSolved = 0;
    char problem[2], isCorrect[10];

    alreadySolved = (bool*)malloc(30 * sizeof(bool));
    array = (int*)calloc(30, sizeof(int));

    memset(alreadySolved, false, 30 * sizeof(bool));

    while(scanf("%d", &SendTime) == 1) {
        if(SendTime == -1) break;

        scanf("%s", problem);
        scanf("%s", isCorrect);

        if( strcmp(isCorrect, "right") == 0 ) {
            if(!alreadySolved[problem[0] - 65]) {
                ans += SendTime;
                ans += array[problem[0] - 65];
                numOfSolved++;
                alreadySolved[problem[0] - 65] = true;
            }
        }else {
            if(!alreadySolved[problem[0] - 65]) {
                array[problem[0] - 65] += 20;
            }
        }

    }

    printf("%d %d\n", numOfSolved, ans);

    return 0;
}