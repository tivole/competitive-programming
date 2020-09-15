// (c) Tivole

// 3254

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  char num[16];
  int numint[16], ans=0;
  gets(num);

  for(int i=0; i<strlen(num); i++)
    numint[i] = (int)num[i] - 48;

  for(int i=strlen(num)-1; i>=0; i--)
    ans += numint[i]*pow(2, strlen(num)-1-i);

  printf("%d\n", ans);

  return 0;
}