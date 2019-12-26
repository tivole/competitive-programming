// (c) Tivole

// 4750

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n;
  scanf("%d", &n);

  int k=0;
  for(int i=1; i<=n*n; i+=n) {

    if(k%2 == 0)
      for(int j=i; j<=i+n-1; j++)
        printf("%d ", j);
    else
      for(int j=i+n-1; j>=i; j--)
        printf("%d ", j);

    k++;
    printf("\n");
  }

  return 0;
}