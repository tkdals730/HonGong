#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char str[20] = "mango tree";
	
	// 이건 원하는 개수의 문자만을 복사
	// 만약 apple로만 쓰이도록 하고싶다면 복사후 널값 넣어야함
	strncpy(str, "apple-pie",5);
	str[5] = '\0';
	printf("%s\n", str);

	// 이건 덮어씌우는거
	//이거는 오버플로우 위험있음
	strcpy(str, "mango");
	printf("%s", str);
	return 0;
}