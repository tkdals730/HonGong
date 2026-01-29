#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	char str[80] = "straw";


	// str 배열에 문자열 붙이기
	// strcat은 메모리를 침범할 수 있다.
	// 또한 사용할떄는 배열을 초기화 해야함
	strcat(str, "berry");
	printf("%s\n", str);

	// str배열에 3개의 문자 붙이기
	strncat(str, "piece", 3);
	printf("%s", str);


	return 0;
}