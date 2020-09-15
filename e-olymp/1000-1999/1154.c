// (c) Tivole

// 1154

#include <stdio.h>

int nod(int a, int b) {
    return b == 0 ? a : nod(b, a % b);
}

int main(int argc, char const *argv[]) {
  int N, M;

  while (scanf("%d%d", &N, &M) == 2) {
    if(nod(N, M)==1)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}