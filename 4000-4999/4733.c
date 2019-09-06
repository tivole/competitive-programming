// (c) Tivole

// 4733

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char num[100];
  gets(num);

  int f4 = ((int)num[strlen(num)-1]-48) + 10*((int)num[strlen(num)-2]-48);
  int f8 = (((int)num[strlen(num)-1]-48) + 10*((int)num[strlen(num)-2]-48) + 100*((int)num[strlen(num)-3]-48));

  if(((int)num[strlen(num)-1]-48) % 2 == 0)
    printf("Yes\n");
  else
    printf("No\n");

  if(f4 % 4 == 0)
    printf("Yes\n");
  else
    printf("No\n");

  if(f8 % 8 == 0)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}