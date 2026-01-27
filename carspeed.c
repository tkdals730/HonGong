#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
"#### 문제
자동차 주행시간 측정 프로그램
거리(km)와 속력(km / h)을 입력받은 후에 시간을 계산하여 출력합니다.단, 다음 조건을 만족하도록 작성합니다.

조건:
거리와 속력인 입력받는 변수는 int형으로 선언하고 시간, 분을 저장할 변수도 int형으로 선언합니다.초는 소수점 이하 셋째 자리까지 출력합니다.

#### 실행결과
거리와 속력 입력 : 420 65 (Enter)
소요 시가은 6시간 27분.538초입니다."
*/

int main(void) {

	int dis;
	int speed;
	int hour;
	int minute;
	double second;

	printf("거리와 속력 입력 : ");
	scanf("%d%d", &dis, &speed);
	printf("%.3lf\n", dis / (double)speed);


	hour = dis / speed;
	printf("%d\n", hour);

	minute = ((double)dis / speed - hour) * 60;
	printf("%d\n", minute);

	second = (((double)dis / speed - hour) * 60 - minute) * 60;
	printf("%.3lf\n", second);
	
	printf("소요 시간은 %d시간 %d분 %.3lf초 입니다.", hour, minute, second);
	return 0;
}