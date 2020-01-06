// (c) Tivole

// 7527

#include <iostream>
using namespace std;

int main()
{
	char name[1000][30];
	int n, result[1000];
	int by, bm, bd;
	int sy, sm, sd, courses;
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%s  %d/%d/%d   %d/%d/%d   %d", name[i], &sy, &sm, &sd, &by, &bm, &bd, &courses);
		if(sy>=2010) result[i] = 2;
		else if(by>=1991) result[i] = 2;
		else if(courses<=40) result[i] = 1;
		else result[i] = 0;
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%s", name[i]);
		if(result[i]==2) printf(" eligible\n");
		else if(result[i]==1) printf(" coach petitions\n");
		else if(result[i]==0) printf(" ineligible\n");
	}
	
}