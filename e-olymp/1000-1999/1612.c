// (c) Tivole

// 1612

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int n, num[256];
  scanf("%d", &n);

  int i=0;
  while(n){
    num[i] = n%2;
    n /= 2;
    i++;
  }

  for(int j=0; j<i; j++)
    if(num[j] == 1){
      num[j] = 0;
      break;
    }

  for(int j=0; j<i; j++)
    n += num[j]*pow(2, j);

  printf("%d\n", n);

  return 0;
}