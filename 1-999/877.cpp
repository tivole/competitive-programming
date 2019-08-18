// (c) Tivole

// 877

#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int main() {

  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int minScore[n][n];
  for(int len = 2; len <= n; len++) {
    for(int left = 0; left + len - 1 < n; left++) {
      int right = left + len - 1;
      if(len == 2) {
        minScore[left][right] = 0;
      } else {
        minScore[left][right] = 100 * 1000 * 1000 + 1;
        for(int mid = left + 1; mid <= right - 1; mid++) {
          minScore[left][right] = min(minScore[left][right], a[left] * a[mid] * a[right] + minScore[left][mid] + minScore[mid][right]);
        }
      }
    }
  }

  printf("%d", minScore[0][n-1]);

  return 0;
}