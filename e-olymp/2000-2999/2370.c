// (c) Tivole

// 2370

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, t=0;
  scanf("%d", &n);

  for(int i=0; i<100; i++){
    for(int j=0; j<100; j++){
      if(n-j-i == 0)
        t++;
    }
  }

  printf("%d\n", t);

  return 0;
}