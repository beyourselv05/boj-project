#include <stdio.h>
#include <string.h> //정수 말고 문자열로 접근

int main() {

	char arr[11];	// 입력받을 문자열 저장
	int i, j;

	scanf("%s", arr);

	// 정렬 구현
	for (i = 9; i >= 0; i--) {
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == i + 48) {	// 아스키코드 0=48 
				printf("%c", arr[j]);
			}
		}
	}
	printf("\n%d", strlen(arr)); //제거
} 
//arr[0]= 문자 9
//arr[1]= 문자 8
//arr[2]= 문자 7