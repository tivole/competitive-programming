// (c) Tivole

// 115

#include <stdio.h>

#define SIZE 31

long long N;
long long F_tmp[SIZE], A_tmp[SIZE];

long long A(long long tmp);
long long F(long long tmp);

int main(void){
  scanf("%lld", &N);
  for (long long i = 0; i<SIZE; i++) {
    F_tmp[i] = 0;
    A_tmp[i] = 0;
  }
  F_tmp[2] = 4;
  A_tmp[2] = 2;
  if (N == 1)  printf("2\n");
  else printf("%lld\n", F(N));

  return 0;
}

long long F(long long tmp){
  if (F_tmp[tmp] != 0) {
    return F_tmp[tmp];
  }
  else{
    F_tmp[tmp] = F(tmp-1)*2 - A(tmp-1);
    return F_tmp[tmp];
  }
}

long long A(long long tmp){
  if (A_tmp[tmp] != 0) {
      return A_tmp[tmp];
  }
  else{
    A_tmp[tmp] = F(tmp-1) - A(tmp-1);
    return A_tmp[tmp];
  }
}