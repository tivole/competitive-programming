// (c) Tivole

// 80

#include <stdio.h>
int main(void){
	int n, m[10000], temp;
	long long Sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &m[i]);

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (m[i] < m[j]){
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
	for (int i = 0; i < n - n % 3; i++) if ((i + 1) % 3) Sum += m[i];
	for (int i = n - n % 3; i < n; i++) Sum += m[i];
	printf("%lld", Sum);
}