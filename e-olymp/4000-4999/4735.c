// (c) Tivole

// 4735

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char num[1000];
  gets(num);

  if(num[strlen(num)-1] == '5' || num[strlen(num)-1] == '0')
    printf("Yes\n");
  else
    printf("No\n");

  if(num[strlen(num)-1] == '0')
    printf("Yes\n");
  else
    printf("No\n");


  return 0;
}