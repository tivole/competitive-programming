// (c) Tivole

// 1118

#include <iostream>

using namespace std;

int main() {

    int n, i, a, minimum, maximum;

    scanf("%d", &n);

    if(n == 1 || n == 0) {
        printf("Ooops!\n");
        return 0;
    }

    scanf("%d", &a);
    maximum = a;
    minimum = a;

    for(i = 1; i < n; i++) {
        scanf("%d", &a);
        if(a > maximum) maximum = a;
        if(a < minimum) minimum = a;
    }

    printf("%d %d\n", minimum, maximum);
    
    return 0;
}