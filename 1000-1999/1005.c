// (c) Tivole

// 1005

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int t, n, m;
  scanf("%d\n", &t);
  int *a = (int*)malloc(t*sizeof(int));

  for(int i=0; i<t; i++) {
    scanf("%d%d", &n, &m);
    int k = n - (n/(1 + m))*(1 + m);
    if(k<=m && k!=0)
      a[i]=1;
    else
      a[i]=2;
  }

  for(int i=0; i<t; i++)
    printf("%d", a[i]);

  return 0;
}