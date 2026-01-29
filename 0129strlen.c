#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen 사용을 위한 헤더파일

int main(void) {

	char str1[80], str2[80];
	char* resp; // 문자열이 긴 배열을 선택할 포인터

	printf("2개의 과일 이름 입력");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) {
		resp = str1;
	}
	else {
		resp = str2;
	}
	printf("이름이 긴 과일은 : %s\n" ,resp);

	return 0;
}