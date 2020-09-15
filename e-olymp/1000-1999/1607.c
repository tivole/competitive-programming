// (c) Tivole

// 1607

#include <stdio.h>

int main(int argc, char const *argv[]) {
  long x;
  int num[64];
  scanf("%ld", &x);
  if(x==0){
    printf("0");
  }else{
    int i=0;
    while(x){
      num[i] = x%10;
      x/=10;
      i++;
    }

    for(int j=0; j<i; j++)
      printf("%d", num[j]);
  }

  return 0;
}