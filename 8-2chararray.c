#define _CRT_SECURE_NO_WARNINGS // 컴파일 안되면 이거쓰기
#include <stdio.h>
#include <string.h>    //  문자열 관련 하무 원혀ㅑㅇ을 모아 놓은 헤더 파일

int main(void) {

	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);

	printf("%s, %s\n", str1, str2);


	return 0;
}
/*
char str[80] = "applejam"
printf("문자열 입력 : ", str);
scanf("%s", str)
printf("문자열 입력 : ",str);
*/