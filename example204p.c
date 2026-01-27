#include <stdio.h>

int main(void) {
	//이번 문제는 *을 x자로 출력하기 for문을 이용하여


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || i + j == 4) {
				printf("*");
			}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
}