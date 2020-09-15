// (c) Tivole

// 3867

#include <stdio.h>

int main() {
	
	int min, first;
	scanf("%d", &first);
	min = first;
	for(int i = 0; i < 2; i++) {
		scanf("%d", &first);
		if(first < min) {
			min = first;
		}
	}
	
	printf("%d\n", min);
	
	return 0;
}