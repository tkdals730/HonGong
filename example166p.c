#include <stdio.h>

int main(void) {

	int a = 20, b = 10;
	// 조건이 하나만 있을때는 중괄호를 생략해도 된다.
	if (a > 10) {
		if (b >= 0) {
			b = 1;
		}
		else {
			b = -1;
		}
	}
	else {

	}

	printf("a : %d\nb : %d", a, b);

	return 0;
}