#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//키보드로 실수 3개를 입력한 후 큰숫자부터 작슨 숫자로 정렬한 뒤 출력
void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double *minp);

int main(void) {

	double max, mid, min;

	printf("실수 값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);

	return 0;
}

void swap(double* pa, double* pb) {
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
// line_up 정의 구간
void line_up(double *maxp, double* midp, double* minp) {
	
	
	if (*maxp < *midp) {
	swap(maxp, midp);
	}
	if (*maxp < *minp) {
	swap(maxp, minp);
	}
	if (*midp < *minp) {
	swap(midp, minp);
	}
			
	printf("가장 큰 값 : %lf\n", *maxp);
	printf("중간 큰 값 : %lf\n", *midp);
	printf("가장 작은 값 : %lf\n", *minp);
}