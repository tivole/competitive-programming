// (c) Tivole

// 7672

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int sum(char a[]) {
    int i, sum = 0;
    for(i = 0; i < strlen(a); i++) {
        sum += ((int)a[i] - 48);
    }
    return sum;
}

int main() {

    int n;
    char a[101];

    scanf("%s", a);

    n = strlen(a);

    for(int i = 0; i < n; i++) {
        for(char j = '9'; j >= '0'; j--) {
            if(a[i] == j && i != (n-1)) break;
            else {
                if(a[i] != j) {
                    char tmp = a[i];
                    a[i] = j;
                    if(sum(a) % 3 == 0) {
                        printf("%s\n", a);
                        return 0;
                    }else {
                        a[i] = tmp;
                    }
                }
            }
        }
    }


    return 0;
}