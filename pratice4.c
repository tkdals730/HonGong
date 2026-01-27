#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int weight;
	double height;
	printf("키와 몸무게를 입력해주세요 : ");
	scanf("%d%lf", &weight, &height );

	double bmi = (double)weight / ((height / 100) * (height / 100));
	printf("몸무게 : %dkg\n", weight);
	printf("키 : %.1lfcm\n", height);
	printf("bmi 지수 : %lf\n", bmi);
	printf("%s",(20 <= bmi) && (bmi > 25) ? "표준입니다." : "체중관리가 필요합니다.");

	return 0;
}