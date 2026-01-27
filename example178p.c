#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a;
	printf("정수 입력 : ");
	scanf("%d", &a);

	switch (a % 3) {
	case 0:
		printf("거짓");
		break;
	default:
		printf("참");
		break;
	}
	return 0;
}