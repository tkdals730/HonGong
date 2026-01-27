#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
반복적으로 양수를 입력 받아 총합을 구하는 프로그램
0이나 음수를 입력하면 반복을 끝내고 그 동안 누적 합 출력
처음부터 0이나 음수가 입력되면 바로 반복을 끝내고 0을출력
*/

int main(void) {
	int number;
	int total = 0;
	int count=0;
	while (1 == 1) {
		printf("양수 입력(종료하려면 0이나 음수를 적어주세요) : ");
		scanf("%d", &number);

		if (number <= 0) {
			break;
		}
		
		total = total + number;
		if (count == 0 && number <= 0) {
			total = 0;
			break;
		}
		count++;

	}
	printf("총 합 : %d", total);

	return 0;
}