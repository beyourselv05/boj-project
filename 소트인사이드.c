#include <stdio.h>
#include <string.h> //���� ���� ���ڿ��� ����

int main() {

	char arr[11];	// �Է¹��� ���ڿ� ����
	int i, j;

	scanf("%s", arr);

	// ���� ����
	for (i = 9; i >= 0; i--) {
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == i + 48) {	// �ƽ�Ű�ڵ� 0=48 
				printf("%c", arr[j]);
			}
		}
	}
	printf("\n%d", strlen(arr)); //����
} 
//arr[0]= ���� 9
//arr[1]= ���� 8
//arr[2]= ���� 7