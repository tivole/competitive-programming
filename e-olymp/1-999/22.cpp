// (c) Tivole

// 22

#include <stdio.h>

int main(){
	int a, b;
	int number1, number2;
	int counter = 0;
	scanf("%d %d", &a, &b);
	if(a>b){
		a+=b;
		b=a-b;
		a-=b;
	}
	if(a==1)
		counter--;
	for(int i=a; i<=b; i++){
		number1=i;
		bool f1=1;
		bool f2=1;
		for(int j=2; j*j<=number1; j++){
			f1=number1%j;
			if(!f1){
				break;
			}
		}
		if(f1){
			number2=0;
			while(number1>0){
				number2=number2*10+number1%10;
				number1/=10;
			}
			for(int j=2; j*j<=number2; j++){
				f2=number2%j;
				if(!f2){
					break;
				}
			}
			if(f2){
				counter++;
			}
		}
	}
	
	printf("%d", counter);
	
	
	return 0;
}