// (c) Tivole

// 5048

#include <stdio.h>

int main(void) {
  int n, k3 = 0, k4 = 0, k5 = 0, t;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &t);
  	if (t == 5) {
      k5++;
    }
  	else {
  		if (t == 4)
        k4++;
  		else k3++;
    }
  }
  if (k3 < 2 && 4 * (k3 + k4) <= n) printf("Degree with honors\n");
  else printf("Ordinary degree\n");

  return 0;
}