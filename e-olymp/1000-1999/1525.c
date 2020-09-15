// (c) Tivole

// 1525

#include <stdio.h>
#include <string.h>

int main(void) {
	long n, m, num, res, d[1000];

	while (scanf("%lld %lld", &n, &m), n + m > 0){

		memset(d, 0, sizeof d);

		scanf("%lld", &d[0]);


		for (int i = 1; i < n; i++){
			scanf("%lld", &num);

			d[i] = d[i - 1] * num % m;
			for (int j = i - 1; j > 0; j--) d[j] = (d[j - 1] * num + d[j]) % m;
			d[0] = (d[0] + num) % m;
		}
		res = d[0];

		for (int i = 1; i < n; i++) if (d[i] > res) res = d[i];

		printf("%ld\n", res);
	}

	return 0;
}