// (c) Tivole

// 2401

#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 100

char array[100][100], len[100], f, n;



char rec(char k, char deep, bool visited[]) {
    visited[k] = true;
    if (deep == n) { return MAX; }
    char i, minimum = MAX, j, temp;
    bool visited_new[n];

    for (i = 0; i < len[k]; i++) {
        if (array[k][i] == f) {
            return deep;
        }
    }

    for (j = 0; j < n; j++) visited_new[j] = visited[j];

    for (i = 0; i < len[k]; i++) {
        if (visited[array[k][i]] == false) {
            temp = rec(array[k][i], deep+1, visited_new);
            if(temp < minimum) minimum = temp;
        }
    }
    return minimum;
}

int main() {

    char s, a, i, j, ans;

    scanf("%d%d%d", &n, &s, &f);

    s--;
    f--;

    for (i = 0; i < n; i++) {
        len[i] = 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a);
            if (a == 1) {
                array[i][len[i]++] = j;
            }
        }
    }
    
    if (s == f) {
        printf("0\n");
        return 0;
    }

    bool visited[n];
    for(i=0; i<n; i++) visited[i] = false;

    ans = rec(s, 1, visited);

    if (ans == MAX) printf("0\n");
    else printf("%d\n", ans);




    return 0;
}