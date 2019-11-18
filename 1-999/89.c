// (c) Tivole

// 89

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  long n, k, s, a, t;
  char c[5];
  scanf("%ld", &n);

  for (long i = 0; i < n; i++) {
    scanf("%ld", &k);
    s=k*6;
    for (long j = 0; j < k; j++) {
      scanf("%s", c );
      if(c[strlen(c)-1] == ':'){
        t=0;
        do {
          scanf("%ld", &a);
          t++;
        } while(a!=0);
        s=s-t+1;
      }
    }
    printf("%ld\n", s);
  }

  return 0;
}