// (c) Tivole

// 908

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int a[110], b[110];
    int lenght, x=0;
    int sum = 0;
    
    scanf("%d", &lenght);
    
    for(int i =0; i<lenght; i++){
		scanf("%d", &a[i]);
	}
    
    for(int i=0; i<lenght; i++){
		if(a[i] > 0){
			if(a[i]%2 == 0 && a[i]%3 == 0){
				b[x] = a[i];
				x++;
			}
		}
	}
    
    for(int i = 0; i < x; i++){
		sum = sum + b[i];
	}
    
    printf("%d %d", x, sum);
    
    return 0;
}