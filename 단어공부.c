#include <stdio.h>
#include <string.h>

char a[1000005]; //�޴� ��
int arr[26]; //abcdef~ ���ĺ��� �� �迭 

int main() {
	int max = 0;
	int size;
	char result;

	scanf("%s", &a);
	size = strlen(a);

	for (int i = 0; i < size; i++) //�� ���ĺ��� ���� Ƚ���� �迭�� ����
		if (a[i] >= 'a') arr[a[i] - 'a']++; // ���ĺ� �ҹ��ڿ� ���� �ε��� ���� Ƚ���� ����(97~)
		else arr[a[i] - 'A']++; //���ĺ� �빮�ڿ� ���� �ε��� ���� Ƚ���� ����(65~)

	for(int i=0; i<26; i++) //���� �� ���ĺ� abcdef~ ���� ����
		if (arr[i] == max) {
			result = '?';
		}
		else if (arr[i] > max) {
			max = arr[i]; //�� �ε��� ���߿��� �ִ�� ���� �� ã��
			result = 'A' + i; //'A' + 25 = 90 -> 'Z' (������ �빮�ڷ� ����ؾ��ϱ� ������ A~Z)
		}

	printf("%c", result);

	return 0;
}