// (c) Tivole

// 1023

#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	return a % b == 0 ? b : gcd(b,a%b);
}

int main() {
    int ch, zn;
    int a, b, sw;
    bool first;
    while( scanf("%d%d", &ch, &zn) == 2 ) {
    	first = true;
    	a = ch/gcd(ch, zn);
    	b = zn/gcd(ch, zn);
    	printf("[");
    	if(b==1) printf("%d", a);
		   	while (b>1) {
		   		
	    		if(a<b && !first) {sw=a; a=b; b=sw;}
	    		printf("%d", a/b);
	    		if(first) printf(";");
	    		else if (b>1) printf(",");
	    		first=false;
	    		a = a%b;
			}
    	printf("]\n");
	}
    return 0;
}