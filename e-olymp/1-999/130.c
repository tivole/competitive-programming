// (c) Tivole

// 130

#include <stdio.h>
#include <math.h>

double rasst(int x1, int y1, int x2, int y2){
	 return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main(void){
	
	int x1, y1, x2, y2, x3, y3, x4=0, y4=0;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	double z1 = rasst(x2, y2, x3, y3);
    double z2 = rasst(x3, y3, x1, y1);
    double z3 = rasst(x1, y1, x2, y2);
	
	if ((z1 > z2) && (z1 > z3)){
		x4 = x2 + x3 - x1;
		y4 = y2 + y3 - y1;
    }
	if ((z2 > z1) && (z2 > z3)){
		x4 = x1 + x3 - x2;
		y4 = y1 + y3 - y2;
	}
	if ((z3 > z1) && (z3 > z2)){
		x4 = x1 + x2 - x3;
		y4 = y1 + y2 - y3;
	}
	
	printf("%d %d", x4, y4);
	
	return 0;
}