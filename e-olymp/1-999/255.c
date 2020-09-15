// (c) Tivole

// 255

#include <stdio.h>

long sumofdigits(long a){
  long sum = 0;
  while (a > 0){
    sum = sum + a%10;
    a = a/10;
  }
  return sum;
}

int main(void){
  int num;
  scanf("%d", &num);
  printf("%ld\n", sumofdigits(sumofdigits(sumofdigits(num))));

  return 0;
}