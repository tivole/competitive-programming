// (c) Tivole

// 944

#include <stdio.h>
#include <math.h>

int main(void){
	int x1, y1, z1;
	int x2, y2, z2;
	int x3, y3, z3;
	int x4, y4, z4;
	double AB, AC, AD, BC, BD, CD; // (AB, AC, BC), (AB, AD, BD), (BC, BD, CD), (AC, AD, CD)
	double p1, p2, p3, p4;
	double s1, s2, s3, s4, s;
	
	scanf("%d %d %d", &x1, &y1, &z1); //A
	scanf("%d %d %d", &x2, &y2, &z2); //B
	scanf("%d %d %d", &x3, &y3, &z3); //C
	scanf("%d %d %d", &x4, &y4, &z4); //D
	
	AB = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1)); 
	AC = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) + (z3-z1)*(z3-z1)); 
	AD = sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1) + (z4-z1)*(z4-z1));
	BC = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) + (z2-z3)*(z2-z3)); 
	BD = sqrt((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4) + (z2-z4)*(z2-z4)); 
	CD = sqrt((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3) + (z4-z3)*(z4-z3));
	
	p1 = (AB + AC + BC)/2; s1 = sqrt(p1*(p1-AB)*(p1-AC)*(p1-BC));
	p2 = (AB + AD + BD)/2; s2 = sqrt(p2*(p2-AB)*(p2-AD)*(p2-BD));
	p3 = (BC + BD + CD)/2; s3 = sqrt(p3*(p3-BC)*(p3-BD)*(p3-CD));
	p4 = (AC + AD + CD)/2; s4 = sqrt(p4*(p4-AC)*(p4-AD)*(p4-CD));
	
	s = s1 + s2 + s3 +s4;
	
	printf("%.1lf", s);
	
	return 0;
}