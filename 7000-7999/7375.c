// (c) Tivole

// 7375

#include <stdio.h>

int main(void){
	
	int ans, m, mod;
	scanf("%d", &m);
	
	mod = m%5;
	
	if(m==1){
		printf("3");
		return 0;
	}else if(m==4){
		printf("4");
		return 0;
	}
	
	switch (mod){
		case 0:
			ans = m/5;
			break;
		case 1:
			ans = (m/5)+1;
			break;
		case 2:
			ans = (m/5)+2;
			break;
		case 3:
			ans = (m/5)+1;
			break;
		case 4:
			ans = (m/5)+2;
			break;
	}
	
	printf("%d\n", ans);
	
	return 0;
}