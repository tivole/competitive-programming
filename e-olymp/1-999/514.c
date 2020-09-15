// (c) Tivole

// 514

#include <stdio.h>

int main(void) {
	int hh1, mm1, ss1, hh2, mm2, ss2, hh3, mm3, ss3, t1, t2;
	scanf("%d:%d:%d %d:%d:%d", &hh1, &mm1, &ss1, &hh2, &mm2, &ss2);
	t1 = hh1 * 3600 + mm1 * 60 + ss1;
	t2 = hh2 * 3600 + mm2 * 60 + ss2;
	int d = (t2 - t1 + 3600 * 24) % (3600 * 24);
	hh3 = d / 3600; d = d % 3600;
	mm3 = d / 60;
	ss3 = d % 60;
	printf("%02d:%02d:%02d\n", hh3, mm3, ss3);
	return 0;
}