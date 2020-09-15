// (c) Tivole

// 2860

#include <iostream>

using namespace std;

void sum(long &pt) {
	pt = pt*(pt + 1) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false);	
	long a, b;
	cin >> a >> b;
	if (a > b) swap(a,b);
	sum(b);
	sum(--a);
	cout << b - a << endl;
	return 0;
}