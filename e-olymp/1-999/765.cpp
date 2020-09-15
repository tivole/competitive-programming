// (c) Tivole

// 765

#include <iostream>
#include <string.h>

using namespace std;

int i, j, l, v, n, t, vi, mx, dp[100001];

int main() {
	scanf("%d %d %d", &l, &v, &n);
	memset(dp, 0x3F, sizeof dp);
	dp[0] = mx = 0;
	

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &vi, &t);
		for (j = mx; j >= 0; j--)
			if (dp[j] + t < dp[j + vi]) dp[j + vi] = dp[j] + t;
		mx += vi;
	}

	double res = 1e10;
	for (i = 0; i <= mx; i++)
	{
		double temp = 1.0 * l / (v + i) + dp[i];
		if (temp < res) res = temp;
	}
	printf("%.6lf\n", res);
	return 0;
}