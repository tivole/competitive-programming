// (c) Tivole

// 542

#include <stdio.h>

int main(void){
	
	int e, f, c;
	int a, b, ans=0;
	
	scanf("%d %d %d", &e, &f, &c);
	b=e+f;
	
	while(b >= c){
		a = b/c;
		b %= c;
		b += a;
		ans += a;
	}
	
	printf("%d", ans);
	
	return 0;
}