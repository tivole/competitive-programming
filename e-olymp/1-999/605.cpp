// (c) Tivole

// 605

#include <iostream>
using namespace std;

int main() {
  int n, m, ans = 0;
  int teams[100];
  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
    scanf("%d", &teams[i]);

  for(int i=0; i < n; i++)
    for(; teams[i] <= m; teams[i]++) {
      if(teams[i] <= m && m % (teams[i]+1) == 0)
        ans++;
      else
        break;
    }
  printf("%d", ans);

  return 0;
}