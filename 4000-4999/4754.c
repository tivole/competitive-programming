// (c) Tivole

// 4754

#include <stdio.h>
#include <string.h>

int main(void){
  long long n, ans = 0, k;
  char num[100];
  scanf("%d", &k);
  scanf("%s", num);
  long long t=1;
	for (int i = strlen(num) - 1; i >= 0; i--)	{
		ans += (num[i] - 48) * t;
		t *= k;
	}
	printf("%d\n", ans);
  return 0;
}