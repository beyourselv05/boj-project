#include <stdio.h>

int main() {
	int a, n, m; //������� �ִ�, ��, ��
	int max = 0;

	for (int i = 0; i < 9; i++) { //loop
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a); // �Է¶�
			if (max <= a) { //�ִ� �Ǻ�
				max = a;
				n = i + 1; //n���� �ִ��� �� �迭 �ּ� ����
				m = j + 1; //n���� �ִ��� �� �迭 �ּ� ����
			}
		}
	}
	printf("%d \n%d %d", max, n, m);
}