// (c) Tivole

// 1227

#include <iostream>
#include <string.h>
#include <set>

using namespace std;

set<string> SetS;
set<string>::iterator iter;
char s[201];

int main() {
	
	scanf("%[^a-zA-Z]", s);

	

	while (scanf("%[a-zA-Z]", s) == 1)
	{
		for (int i = 0; i < strlen(s); i++) s[i] = tolower(s[i]);
		SetS.insert(s);
		scanf("%[^a-zA-Z]", s);
	}
	for (iter = SetS.begin(); iter != SetS.end(); ++iter) printf("%s\n", (*iter).c_str());
	return 0;
}