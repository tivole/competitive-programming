// (c) Tivole

// 1622

#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d ", n);
	if (n % 100 == 11 || n % 100 == 12 || n % 100 == 13 || n % 100 == 14) printf("bochek\n");
	else{
		switch (n % 10){
  		case 1: printf("bochka\n"); break;
      case 2:
		  case 3:
  		case 4: printf("bochki\n"); break;
  		default: printf("bochek\n"); break;
		}
	}
  return 0;
}