// (c) Tivole

// 1542

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, k, tests;
	scanf("%d", &tests);
	while (tests--)
	{
		scanf("%d", &k); k = abs(k);

		//Отдельно обрабатываем случай k = 0.
		if (!k) printf("3\n");
		else
		{
			
			
			n = (int)ceil((-1 + sqrt(1 + 8.0 * k)) / 2);
			while (((1 + n) * n / 2 - k) % 2 == 1) n++;
			printf("%d\n", n);
		}
	}
	return 0;
}