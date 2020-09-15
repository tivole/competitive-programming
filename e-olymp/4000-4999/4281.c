// (c) Tivole

// 4281

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text[500];
  gets(text);

  for(int i=0; i<strlen(text); i++) {
    if((int)text[i]>=65 && (int)text[i]<=90) {
      text[i] = (char)((int)text[i] + 32);
    }
    else if((int)text[i]>=97 && (int)text[i]<=122){
      text[i] = (char)((int)text[i] - 32);
    }
  }

  puts(text);

  return 0;
}