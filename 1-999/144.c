// (c) Tivole

// 144

#include <stdio.h>

int check(double a1, double  b1, double a2, double b2, double a3, double b3){
	if((a1-a2)*(a3-a2)+(b1-b2)*(b3-b2)==0){
		return 1;
	}else{
		return 0;
	}
}

int main(void){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	int k=0;
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	
	if(check(x1, y1, x2, y2, x3, y3)==1) k++;
	if(check(x2, y2, x3, y3, x4, y4)==1) k++;
	if(check(x3, y3, x4, y4, x1, y1)==1) k++;
	if(check(x4, y4, x1, y1, x2, y2)==1) k++;
	
	printf("%d", k);
	
	return 0;
}