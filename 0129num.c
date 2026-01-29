#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//정수 5개입력받기
//입력은 키보드
//출력은 한번
//끝나면 종료
//합 평균 최소 최대값 구하기
int main(void) {
	
	int numbers[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("숫자 입력 : ");
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	int max = numbers[0];
	int min = numbers[0];

	
	for (int i = 0; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		if (min > numbers[i]) {
			min = numbers[i];
		}
	}
	double avr = (double)sum / (sizeof(numbers) / sizeof(numbers[0]));

	printf("합 : %d, 평균 : %.1lf, 최소 : %d, 최대 : %d", sum, avr, min, max);
	
	



	return 0;
}