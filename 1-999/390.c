// (c) Tivole

// 390

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fact(int num){
	if(num<=1) return 1;
	else return num*fact(num-1);
}

int main(void){
	int length, usl=0;
	long long factorial[15];
	long long otv, drob=1;
	int b[15];
	char a[15];
	char s[15];
	
	gets(a);
	length = strlen(a);
	
	for(int i=0; i<length; i++){
		b[i]=0;
	}
	
	int size=0;
	for(int i=0; i<length; i++){
		for(int j=0; j<size; j++){
			if(a[i]==s[j]){
				usl=1;
				b[j]++;
				continue;
			}
		}
		if(usl == 0){
			s[size] = a[i];
			b[size]=1;
			size++;
		}
		usl=0;
	}
	
	for(int i=0; i<size; i++){
		factorial[i] = fact(b[i]);
	}
	
	for(int i=0; i<size; i++){
		drob *= factorial[i];
	}
	
	otv = (fact(length))/drob;
	
	printf("%lld", otv);
	
	return 0;
}