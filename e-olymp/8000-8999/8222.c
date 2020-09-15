// (c) Tivole

// 8222

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int i, j;
  char stroka[100];
  gets(stroka);
  scanf("%d%d", &i, &j);

  if(i>j){
    printf("0\n");
    return 0;
  }

  printf("%d\n", j-i+1);
  for(;i<=j; i++)
    printf("%c", stroka[i-1]);
  printf("\n");

  return 0;
}