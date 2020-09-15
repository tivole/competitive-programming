// (c) Tivole

// 7340

#include <stdio.h>
#include <string.h>

int main(void) {

  int i,j, lengthOfWord, numOfDiffElem = 0, flag;
  char word[128], diffSyms[128];

  scanf("%s", word);

  lengthOfWord = strlen(word);
  diffSyms[0] = word[0];
  numOfDiffElem++;

  for(i = 1; i < lengthOfWord; i++) {
    flag = 1;
    for(j = 0; j < numOfDiffElem; j++) {
      if(word[i] == diffSyms[j]) {
        flag = 0;
      }
    }
    if(flag) {
      diffSyms[numOfDiffElem] = word[i];
      numOfDiffElem++;
    }
  }

  printf("%d\n", numOfDiffElem);
  
  return 0;
}