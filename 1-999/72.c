// (c) Tivole

// 72

#include <stdio.h>
#include <math.h>

int main(void){
	long n, k, t, v, x, y, temp, count, hx, hy;
	
	scanf("%ld %ld %ld %ld", &n, &k, &t, &v);
	scanf("%ld %ld", &hx, &hy);
	
	count=0; x=0; y=0; temp=1;
	x+=temp; y+=temp;
	
	while(count<k){
		if (count==k) break;
		temp+=n;
		x+=temp; y-=temp;
		count++;
		if (count==k) break;
		temp+=n;
		x-=temp; y-=temp;
		count++;
		if (count==k) break;
		temp+=n;
		x-=temp; y+=temp;
		count++;
		if (count==k) break;
		temp+=n;
		x+=temp; y+=temp;
		count++;
		if (count==k) break;
	}
	if (sqrt((x-hx)*(x-hx)+(y-hy)*(y-hy)) <= t*v*sqrt(2)) printf("Good night Ia");
	else printf("Poor Ia");

	return 0;
}