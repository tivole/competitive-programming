// (c) Tivole

// 1609

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {

  char num[256], x[2];
  scanf("%s", num);
  scanf("%s", x);
  int t=0;

  for(int i=0; i< strlen(num); i++){
    if(num[i] == x[0])
      t++;
  }
  printf("%d\n", t);

  return 0;
}