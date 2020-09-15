// (c) Tivole

// 1226

#include <iostream>
#include <set>

using namespace std;

multiset<pair<int, int> > s;
multiset<pair<int, int> >::iterator iter;

int main() {
	int a, b, i, n, t;
	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &n); s.clear();
		for (i = 0; i < n; i++)
		{
			scanf("%d %d", &a, &b);
			if ((iter = s.find(make_pair(b, a))) == s.end()) s.insert(make_pair(a, b));
			else s.erase(iter);
		}
		

		if (s.empty()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}