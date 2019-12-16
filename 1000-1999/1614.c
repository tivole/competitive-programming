// (c) Tivole

// 1614

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  double ans, l[3], maxL;
  int i, maxIndex, x1, y1, x2, y2, x3, y3;
  scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

  l[0] = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
  l[1] = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
  l[2] = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

  maxL = l[0];
  maxIndex = 0;
  for(i = 1; i < 3; i++) {
    if(l[i] > maxL) {
      maxL = l[i];
      maxIndex = i;
    }
  }

  ans = (l[(maxIndex + 1)%3] * l[(maxIndex + 1)%3] + l[(maxIndex + 2)%3] * l[(maxIndex + 2)%3] - l[maxIndex] * l[maxIndex]) / (2 * l[(maxIndex + 2)%3] * l[(maxIndex + 1)%3]);
  ans = (acos(ans) / M_PI) * 180.0;

  printf("%.6lf", ans);

  return 0;
}