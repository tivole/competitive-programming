// (c) Tivole

// 1540

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int a[5], Found;

int RunSum(int Sum, int index)
{
	if (index == 5)
	{
		if (Sum == 23) return 1;
		return 0;
	}
	if (RunSum(Sum + a[index], index + 1)) return 1;
	if (RunSum(Sum - a[index], index + 1)) return 1;
	if (RunSum(Sum*a[index], index + 1)) return 1;
	return 0;
}

int main() {
	
	while (scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]), a[0] + a[1] + a[2] + a[3] + a[4])
	{
		sort(a, a + 5);
		Found = 0;
		do {
			if (Found = RunSum(a[0], 1)) break;
		} while (next_permutation(a, a + 5));
		printf(Found ? "Possible\n" : "Impossible\n");
		memset(a, 0, sizeof a);
	}
	return 0;
}