// (c) Tivole

// 128

#include <stdio.h>
#include <string.h>

int main(void){
	int n;
	scanf("%d", &n);
	int t=0;

	int a1, a2, a3;
	for(long i = 0; i<1000; i++){
		if(i<10){ a1 =i; a2 =0; a3 =0;}
		else if(i<100){a1 = i%10; a2 = i/10; a3=0;}
		else if(i<1000){a1 = i%10; a2 = ((i%100) - a1)/10; a3=i/100;}

		if((a1 + a2 +a3) == n)
			t++;
	}

	printf("%d", t*t);
	return 0;
}