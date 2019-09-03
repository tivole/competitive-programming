// (c) Tivole

// 262

#include <stdio.h>

int m[2000];
int n, k, dn[2000], tmp;
int dnbool[2000];

int max(int a, int b){
  return a > b ? a : b;
}

int rec(int index){
	if (index >= 2 * n) return 0;
	if (dnbool[index]) return dn[index];
	int tmpmin = rec(index + 1);
	for (int i = 2; i <= k; i++) tmpmin = max(tmpmin, rec(index + i));
	dnbool[index] = 1;
	return dn[index] = m[index] + tmpmin;
}

int main(void){
  scanf("%d", &n);
  m[0] = 0;
	for (int i = 0; i < n; i++){
    scanf("%d", &tmp);
    m[i+1] = tmp;
	}
  scanf("%d", &k);
	for (int i = 0; i < n; i++) m[i+n+1] = 0;
	for (int i = 0; i < 2000; i++) dn[i] = dnbool[i] = 0;
	printf("%d\n", rec(0));

  return 0;
}