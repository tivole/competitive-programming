// (c) Tivole

// 13

#include <stdio.h>
#include <math.h>

double Ti_r(int, int, int, int);

int main(void) {

  int a, b, c, x1, y1, x2, y2, z2;
  double r;

  scanf("%d%d%d", &a, &b, &c);
  scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &z2);

  if(z2 == 0) { r = Ti_r(x1, y1, x2, y2); }
  else if(x2 == 0) { r = Ti_r(x1, y1, -z2, y2); }
  else if(x2 == a) { r = Ti_r(x1, y1, a+z2, y2); }
  else if(x2 == b) { r = Ti_r(x1, y1, b+z2, y2); }
  else if(y2 == 0) { r = Ti_r(x1, y1, x2, -z2); }
  else if(y2 == b && x2 != 0) { r = Ti_r(x1, y1, x2, b+z2); }
  else if(y2 == a) { r = Ti_r(x1, y1, x2, a+z2); }

  printf("%.2lf\n", r);

  return 0;
}

double Ti_r(int x1, int y1, int x2, int y2) {
  return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}