// (c) Tivole

// 5049

#include <stdio.h>
#include <string.h>

char text[1000];

int main(void) {
	gets(text);
	if (strlen(text) > 0) {
    printf("%c", text[0]);
		for (int i = 1; i < strlen(text); i++)
			if (text[i] != ' ') printf("%c", text[i]);
			else if (text[i] == ' ' && text[i - 1] != ' ') printf("%c", text[i]);
	}
	printf("\n");
  return 0;
}