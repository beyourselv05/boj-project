#include <stdio.h>

int main() {
	int a, n, m; //순서대로 최댓값, 행, 열
	int max = 0;

	for (int i = 0; i < 9; i++) { //loop
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a); // 입력란
			if (max <= a) { //최댓값 판별
				max = a;
				n = i + 1; //n값에 최댓값의 행 배열 주소 저장
				m = j + 1; //n값에 최댓값의 열 배열 주소 저장
			}
		}
	}
	printf("%d \n%d %d", max, n, m);
}