// (c) Tivole

// 3002

#include <stdio.h>

int main(int argc, char const *argv[]) {

  int n, a, b, f=0, s=0;
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d%d", &a, &b);
    if(a>b)
      f++;
    else if(b>a)
      s++;
  }

  if(f>s)
    printf("1\n");
  else if(s>f)
    printf("2\n");
  else
    printf("0\n");

  return 0;
}