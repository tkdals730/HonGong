#include <stdio.h>

int main(void) {

	int a = 10, b = 15, total;
	double avg;
	int* pa, *pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);  // 10 15
	printf("두 정수의 합 : %d\n", *pt);           // 25
	printf("두 정수의 vudrbs : %.1lf\n", *pg);    // 12.5

	return 0;
}