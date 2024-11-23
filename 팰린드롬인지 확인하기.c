#include <stdio.h>
#include <string.h>

int main() {
	char s[101];
	scanf("%s", s);

	for (int i = 0; i <= strlen(s) / 2; i++) {
		if (s[i] != s[strlen(s) - i - 1]) {
			printf("0");
			return 0;
		}
	}
	printf("1");
}