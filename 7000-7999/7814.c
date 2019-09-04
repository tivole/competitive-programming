// (c) Tivole

// 7814

#include <stdio.h>

int min(int a, int b, int c){
  if(c<=b && c<=a && c>9)
    return c;
  else if(b<=a && b<=c && b>9)
    return b;
  else
    return a;
}

int main(int argc, char const *argv[]) {

  int n;
  scanf("%d", &n);

  int d[3];
  d[0] = n%10;
  d[1] = (n/10)%10;
  d[2] = n/100;

  int a = d[2]*10 + d[1];
  int b = d[2]*10 + d[0];
  int c = d[1]*10 + d[0];

  printf("%d\n", min(a,b,c));


  return 0;
}