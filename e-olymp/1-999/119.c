// (c) Tivole

// 119

#include <string.h>
#include <stdio.h>

char str[1000000];

long length, n = 1, mas[10240], lenmas = 1, sum = 1, ost;

int main(){
	gets(str);
	length = strlen(str);
	mas[0] = 2;
	while (sum < length){
		ost = 0;
		for (int i = 0; i < lenmas; i++){
			ost += mas[i] * 2;
			mas[i] = ost % 10;
			ost /= 10;
		}
		while (ost){
			mas[(lenmas++)] = ost % 10;
			ost /= 10;
		}
		n++;
		sum += lenmas;
	}

	printf("%ld", n);
	
	return 0;
}