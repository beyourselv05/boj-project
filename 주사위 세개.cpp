#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int value;

	if (a == b && b == c) { 
		value = 10000 + a * 1000;
	} 
	else if (a == b) {
		value = 1000 + a * 100;
	}
	else if (b == c) {
		value = 1000 + b * 100;
	}
	else if (c == a) {
		value = 1000 + c * 100;
	}
	else {
		int max = a;
		if (b > max) max = b;
		if (c > max) max = c;
		value = max * 100;
	}
	printf("%d", value);
	return 0;
}