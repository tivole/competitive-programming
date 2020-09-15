// (c) Tivole

// 76

#include <stdio.h>

int main(void){
	double a, b, x, y, z;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &x, &y, &z);
	
	
	if((x<a)&&(y<b)) printf("1");
	else if((y<b)&&(x<a)) printf("1");
	else if((y<a)&&(x<b)) printf("1");
	else if((x<b)&&(y<a)) printf("1");
	else if((x<a)&&(z<b)) printf("1");
	else if((z<b)&&(x<a)) printf("1");
	else if((z<a)&&(x<b)) printf("1");
	else if((x<b)&&(z<a)) printf("1");
	else if((y<a)&&(z<b)) printf("1");
	else if((z<b)&&(y<a)) printf("1");
	else if((z<a)&&(y<b)) printf("1");
	else if((y<b)&&(z<a)) printf("1");
	else printf("0");
	
	
	return 0;
}