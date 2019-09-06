// (c) Tivole

// 4734

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char num[1000];
  int n[1000];
  gets(num);

  int sum=0;
  for(int i=0; i<strlen(num); i++) {
    n[i] = (int)num[i] - '0';
    sum+=n[i];
  }

  if(sum % 3 == 0)
    printf("Yes\n");
  else
    printf("No\n");

  if(sum % 3 == 0 && n[strlen(num)-1] % 2 == 0)
    printf("Yes\n");
  else
    printf("No\n");

  if(sum % 9 == 0)
    printf("Yes\n");
  else
    printf("No\n");


  return 0;
}