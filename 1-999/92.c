// (c) Tivole

// 92

#include <stdio.h>

int m, n, t, p, temp[1000];
long long Suma[1000];

void push(int m){
	for (int i = 0; i < p; i++)
		if (temp[i] < m){
			for (int j = p - 1; j > i; j--) temp[j] = temp[j - 1];

			temp[i] = m; break;
		}
}



int main(void){
	scanf("%d", &n);

	for (int i = 0; i < n; Suma[i] = 0, i++);

	for (int i = 0; i < n; i++){
		scanf("%d %d", &t, &p);

		for (int j = 0; j < t; j++) temp[j] = 0;
		for (int j = 0; j < p; j++) { scanf("%d", &m); push(m); }
		for (int j = 0; j < t; j++) Suma[i] += temp[j];
	}

	for (int i = 0; i < n; i++) printf("%lld\n", Suma[i]);
	
	return 0;
}