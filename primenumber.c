#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 32767이 소수인지 구해야함
// 함수명 prime_check
// 정수로 입력받아 소수면 1 아니면 0 반환
int prime_check(int num);

int main(void) {

	int num;
	printf("숫자를 입력해주세여 : ");
	scanf("%d", &num);
	prime_check(num);
	
	return 0;
}

int prime_check(int num) {

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("소수가 아닙니다.");
			return 0;
		}
	}
	printf("소수입니다.");
	return 1;
}