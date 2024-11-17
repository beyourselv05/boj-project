#include <stdio.h>
#include <string.h>

char a[1000005]; //받는 값
int arr[26]; //abcdef~ 알파벳의 각 배열 

int main() {
	int max = 0;
	int size;
	char result;

	scanf("%s", &a);
	size = strlen(a);

	for (int i = 0; i < size; i++) //각 알파벳의 등장 횟수를 배열에 저장
		if (a[i] >= 'a') arr[a[i] - 'a']++; // 알파벳 소문자에 대한 인덱스 등장 횟수를 저장(97~)
		else arr[a[i] - 'A']++; //알파벳 대문자에 대한 인덱스 등장 횟수를 저장(65~)

	for(int i=0; i<26; i++) //이제 각 알파벳 abcdef~ 조사 시작
		if (arr[i] == max) {
			result = '?';
		}
		else if (arr[i] > max) {
			max = arr[i]; //각 인덱스 값중에서 최대로 나온 값 찾기
			result = 'A' + i; //'A' + 25 = 90 -> 'Z' (무조건 대문자로 출력해야하기 때문에 A~Z)
		}

	printf("%c", result);

	return 0;
}