// (c) Tivole

// 1214

#include <iostream>

using namespace std;

int main() {
	long n, k, res = 1;
	scanf("%d %d", &n, &k);
	bool flag = 0;

	for (; n > 0; n -= k) {
		if (1e18 / n < res) {
			flag = 1;
			break;
		}
		res *= n;
	}

	if (flag) puts("overflow");
	else printf("%ld\n", res);
	
    return 0;
}