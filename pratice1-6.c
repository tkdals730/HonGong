#include <stdio.h>

// "#### 문제
// 빈 칸이 포함된 문자열 ""Be happy!""를 저장할 가장 작은 char형 배열을 선언하고 키보드로부터 입력하는 코드를 작성합니다. "

int main(void) {

	char happy[10];
	printf("문자를 입력해 주세여 : ");
	gets(happy);
	printf("입력받은 문자열 : ");
	puts(happy);

	return 0;
}