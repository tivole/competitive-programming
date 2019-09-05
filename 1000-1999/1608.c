// (c) Tivole

// 1608

#include <stdio.h>

long reverse(long x){
	long y=0;
	while(x){
		y*=10;
		y+=x%10;
		x/=10;
	}
	return y;
}

long polindrom(long m){
  return reverse(m) == m ? 1 : 0;
}

int main(int argc, char const *argv[]) {

  long n;
  scanf("%ld", &n);
  if(polindrom(n))
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}