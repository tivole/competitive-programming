// (c) Tivole

// 1467

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int X[1000];
    int Y[1000];
    double A[1000], B[1000], C[1000];
    double znaki[1000];
    double value;
    int i, n;
    scanf("%d", &n);
    while(n != 0) {
    	for(i=0; i<n; i++) {
    		scanf("%d%d", &X[i], &Y[i]);
		}
		
		for(i=0; i<n; i++) {
			A[i] = Y[(i+1)%n]-Y[i]; // A[0] PRHOHDIT CHEREZ TOCHKI 0 i 1
			B[i] = -X[(i+1)%n]+X[i];
			C[i] = -X[i]*Y[(i+1)%n] + Y[i]*X[(i+1)%n];
			
			znaki[i] = A[i]*X[(i+2)%n] + B[i]*Y[(i+2)%n] + C[i];
		}
	
		int x, y;
		scanf("%d%d", &x, &y);
		
		for(i=0; i<n; i++) {
			value = A[i]*x + B[i]*y + C[i];
			if( abs(value) < 1e-10 ) {printf("ON BORDER\n"); goto END;}
			if( value * znaki[i] < 0.0) {printf("OUTSIDE\n"); goto END;}
		}
		printf("INSIDE\n");
		////////////////////////
			END:
		scanf("%d", &n);
	}
    
	
	
    return 0;
}