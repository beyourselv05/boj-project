#include <stdio.h>

int main() {
	int M, N;
	scanf("%d", &N);
	for (int M = 1; M < 10; M++) {
		printf("%d * %d = %d\n", N, M, N * M);
	}
}