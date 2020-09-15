// (c) Tivole

// 6239

#include <iostream>
#include <cstring>
using namespace std;

//  {Re, Pt, Cc, Ea, Tb, Cm, Ex}

int main(void) {
	
	int x[7] = {0, 0, 0, 0, 0, 0, 0}, sum = 0, i;
	char c[3];
	
	while(scanf("%s", c) == 1) {
		if(strcmp(c, "Re") == 0) x[0] ++;
		else if(strcmp(c, "Pt") == 0) x[1] ++;
		else if(strcmp(c, "Cc") == 0) x[2]++;
		else if(strcmp(c, "Ea") == 0) x[3]++;
		else if(strcmp(c, "Tb") == 0) x[4]++;
		else if(strcmp(c, "Cm") == 0) x[5]++;
		else if(strcmp(c, "Ex") == 0) x[6]++;
		else sum++;
	}
	
	
	for(i = 0; i < 7; i++) sum += x[i];
	
	cout << "Re " << x[0] << " ";
	printf("%.2lf\n", (double)x[0]/sum);
	
	cout << "Pt " << x[1] << " ";
	printf("%.2lf\n", (double)x[1]/sum);
	
	cout << "Cc " << x[2] << " ";
	printf("%.2lf\n", (double)x[2]/sum);
	
	cout << "Ea " << x[3] << " ";
	printf("%.2lf\n", (double)x[3]/sum);
	
	cout << "Tb " << x[4] << " ";
	printf("%.2lf\n", (double)x[4]/sum);
	
	cout << "Cm " << x[5] << " ";
	printf("%.2lf\n", (double)x[5]/sum);
	
	cout << "Ex " << x[6] << " ";
	printf("%.2lf\n", (double)x[6]/sum);
	
	printf("Total %d 1.00\n", sum);
	
	return 0;
}