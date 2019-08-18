// (c) Tivole

// 7640

#include <cstdlib>

using namespace std;

int main() {

    int n, i, j, ans;
    char *word = NULL, *new_word = NULL, **array = NULL;
    bool isIt;

    word = (char*)malloc(9 * sizeof(char));
    new_word = (char*)malloc(9 * sizeof(char));

    scanf("%s", word);
    scanf("%d", &n);

    array = (char**)malloc(n * sizeof(char*));
    for(i = 0; i < n; i++) array[i] = (char*)malloc(9 * sizeof(char));

    ans = 0;
    for(i = 0; i < n; i++) {
        scanf("%s", new_word);
        isIt = true;
        for(j = 0; j < 9; j++) {
            if(word[j] != '*') {
                if(word[j] != new_word[j]) {
                    isIt = false;
                    break;
                }
            }
        }
        if(isIt) {
            for(j = 0; j < 9; j++) array[ans][j] = new_word[j];
            ans++;
        }
    }

    printf("%d\n", ans);
    for(i = 0; i < ans; i++) {
        printf("%s\n", array[i]);
    }


    return 0;
}