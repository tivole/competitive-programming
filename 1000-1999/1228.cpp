// (c) Tivole

// 1228

#include <iostream>
#include <queue>
#include <functional>

using namespace std;

priority_queue<long, vector<long>, greater<long> > pq;

int main() {
	long n, num, res, i;
	scanf("%ld", &n);
	for (res = i = 0; i < n; i++) scanf("%ld", &num), pq.push(num);

	while (pq.size() > 1) {
		long a = pq.top(); pq.pop();
		long b = pq.top(); pq.pop();
		pq.push(a + b);
		res += a + b;
	}
	printf("%ld\n", res);
	return 0;
}