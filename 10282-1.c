#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
"#### 문제
다섯 명의 심사위원 점수를 입력하여 유효점수와 평균을 출력하는 프로그램을 작성합니다.유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

#### 실행결과
5명 심사위원의 점수 입력 : 7 9 4 8 5
유효점수 : 7 8 5
평균 : 6.7 "
*/
int max_value(int score[], int size);
int min_value(int score[], int size);
int main(void) {

	int scores[5];
	double avg;
	int total = 0;
	int size = sizeof(scores) / sizeof(scores[0]);
	printf("5명의 심사위원의 점수 입력 : ");
	for (int i = 0; i < size ; i++) {
		scanf("%d", &scores[i]);
		total = total + scores[i];
	}
	int max = max_value(scores,size);
	int min = min_value(scores,size);
	total = total - max - min ;
	avg = (double) total / (size - 2);

	printf("유효 점수 : ");
	int remove_max = 0;
	int remove_min = 0;
	for (int i = 0; i < size; i++) {
		if (scores[i] == max && remove_max == 0) {
			remove_max = 1;
			continue;
		}
		if (scores[i] == min && remove_min == 0) {
			remove_min = 1;
			continue;
		}
		printf("%d",scores[i]);
		
	}
	
	printf("\n평균 : %.1lf\n", avg);
	return 0;
}

int max_value(int score[], int size) {
	
	int max = score[0];
	for (int i = 0; i < size; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	return max;
}
int min_value(int score[], int size) {

	int min = score[0];
	
	for (int i = 0; i < size ; i++) {
		if (min > score[i]) {
			min = score[i];
		}
		
	}
	return min;
}