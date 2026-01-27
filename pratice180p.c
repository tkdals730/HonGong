#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 키보드로 수식을 입력하면 계산결과를 출력하는 프로그램을 작성하세여. 
	// 정수 사칙연산만 입력합니다
	int num1, num2;
	char operator;

	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d",&num1, &operator, &num2);

	if (operator == '+') {
		printf("%d + %d = %d",num1, num2, num1 + num2 );
	}
	else if (operator == '-') {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (operator == '*') {
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else if (operator == '/') {
		printf("%d / %d = %d", num1, num2, num1 / num2);
	}
	else if (operator == '%') {
		printf("%d %% %d = %d", num1, num2, num1 % num2);
	}
	return 0;
}