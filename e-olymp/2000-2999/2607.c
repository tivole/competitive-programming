// (c) Tivole

// 2607

#include <stdio.h>

int main(int argc, char const *argv[]) {
  long n;
  scanf("%ld", &n);

  int i=0, odd=0, even=0;
  while(n){
    if(i%2 == 0)
      even += n%10;
    else
      odd  += n%10;
    n/=10;
    i++;
  }
  printf("%d\n", odd*even);

  return 0;
}