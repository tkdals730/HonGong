#include <stdio.h>

int main(void) {

	int hour, min, sec;

	double time = 3.76;

	hour = (int)time;
	printf("시 : %d\n", hour);

	min = (int)((time - hour) * 60);
	printf("분 : %d\n", min);

	sec = (((time - hour) * 60) - min) * 60;
	printf("초 : %d\n", sec);

	printf("%.2lf시간은 %d시 %d분 %d초 입니다.",time, hour, min, sec);
	return 0;
}