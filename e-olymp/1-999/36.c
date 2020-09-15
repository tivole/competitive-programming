// (c) Tivole

// 36

#include <stdio.h>

int main(void){
	long int n, m, m1, n1;
	scanf("%ld %ld", &n, &m);
	
	if ((m==0) && (n==0)) printf("0");
	else if ((m==0) && (n % 2==1)) printf("-1"); 
	else if ((m==0) && (n % 2==0)) printf("%ld", n/2);
	else if ((n % 2==0) && (m % 4==1)) {m1=(m/4);    n1=n+m1*2; printf("%ld", (n1/2)+m1*2+6); }
	else if ((n % 2==0) && (m % 4==2)) {m1=(m/4);    n1=n+m1*2; printf("%ld", (n1/2)+m1*2+5); }
	else if ((n % 2==0) && (m % 4==3)) {m1=(m/4);    n1=n+m1*2; printf("%ld", (n1/2)+m1*2+4); }
	else if ((n % 2==0) && (m % 4==0)) {m1=(m/4)-1;  n1=n+2*m1; printf("%ld", (n1/2)+m1*2+3); }  
	else if ((n % 2==1) && (m % 4==0)) {m1=(m/4)-1;  n1=n+m1*2; printf("%ld", (n1/2)+m1*2+7); }
	else if ((n % 2==1) && (m % 4==1)) {m1=(m/4);    n1=n+m1*2; printf("%ld", (n1/2)+m1*2+3); }
	else if ((n % 2==1) && (m % 4==2)) {m1=(m/2);    n1=n+m1;   printf("%ld", (n1/2)+m1);     }
	else if ((n % 2==1) && (m % 4==3)) {m1=(m/4);    n1=n+m1*2; printf("%ld", (n1/2)+m1*2+8); }
	
	return 0;
}