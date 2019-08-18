// (c) Tivole

// 6247

#include <iostream>

using namespace std;

int area2(int xa, int ya, int xb, int yb, int xc, int yc) {
	return abs((xb - xa)*(yc - ya) - (xc - xa)*(yb - ya));
}

int gcd(int a, int b) {
	return a % b == 0 ? b : gcd(b, a%b);
}

int main() {
	int n;
	int xa, ya, xb, yb, xc, yc;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xc, &yc);
		int edge=0, a, b;
		
		a=abs(xa-xb);
		b=abs(ya-yb);
		if(a==0) edge+=b;
		else if(b==0) edge+=a;
		else edge+=gcd(a, b);
		
		a=abs(xb-xc);
		b=abs(yb-yc);
		if(a==0) edge+=b;
		else if(b==0) edge+=a;
		else edge+=gcd(a, b);
		
		a=abs(xa-xc);
		b=abs(ya-yc);
		if(a==0) edge+=b;
		else if(b==0) edge+=a;
		else edge+=gcd(a, b);
		
		if( area2(xa, ya, xb, yb, xc, yc) == 0 ) cout << "0\n";
		else cout << (area2(xa, ya, xb, yb, xc, yc) - edge + 2)/2 << endl;
	}
	return 0;
}