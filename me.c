// 이름 나이 키 ㅕㄹ액형 10년후 자신을 출력

#include <stdio.h>

int main(void) {

	char name[20] = "이상민";
	double height = 183.0;
	int age = 31;
	char bc[5] = "AB";

	printf("10년후의 프로필...\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d살\n", age +10);
	printf("키 : %.1lf\n", height - 0.5);
	printf("혈액형 : %s\n", bc);
	return 0;
}