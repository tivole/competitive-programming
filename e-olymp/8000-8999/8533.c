// (c) Tivole

// 8533

#include <stdio.h>

int Ti_CheckRepeat(int);

int main(void) {

  int a, b, i;

  scanf("%d%d", &a, &b);

  for(i = a; i <= b; i++) {
    if(i != b) {
      if(Ti_CheckRepeat(i)) printf("%d ", i);
    }else {
      if(Ti_CheckRepeat(i)) printf("%d", i);
    }
  }

  printf("\n");

  return 0;
}


int Ti_CheckRepeat(int num) {
  int a1, a2, a3, a4;
  a4 = num%10;
  a1 = num/1000;
  a3 = (num%100)/10;
  a2 =(num%1000)/100;
  if((a1 != a2) && (a1 != a3) && (a1 != a4) && (a2 != a3) && (a2 != a4) && (a3 != a4)) return 1;
  else return 0;
}