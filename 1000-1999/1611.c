// (c) Tivole

// 1611

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char s[1000];
  int i, j;
  gets(s);
  scanf("%d%d", &i, &j);

  if(i>j){int t=i;  i=j;  j=t;}

  while(i<=j){
    char c = s[i-1];
    s[i-1] = s[j-1];
    s[j-1] = c;
    i++;
    j--;
  }

  puts(s);

  return 0;
}