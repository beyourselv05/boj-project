#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n/4; i++) {
		printf("long ");
	}
	printf("int");
}