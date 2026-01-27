#define _CRT_SECURE_NO_WARNINGS // 컴파일 안되면 이거쓰기
#include <stdio.h>
#include <string.h>    //  문자열 관련 하무 원혀ㅑㅇ을 모아 놓은 헤더 파일

int main(void) {

	char str[80] = "cat";
	

	printf("문자열 입력 : ");
	gets(str); // 문자열 scanf 입력 
	puts("입력된 문자열 : ");
	puts(str); // 출력 
	// fgets(str, sizeof(str), stdin);
	return 0;
}