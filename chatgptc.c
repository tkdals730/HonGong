#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
문제 설명
사용자로부터 정수 N개를 입력받아,
가장 큰 수, 가장 작은 수, 합계, 평균을 계산하고
그 수들 중 짝수와 홀수의 개수를 출력하는 프로그램을 작성하시오.
조건
N은 2 이상 10 이하의 정수이다.
입력되는 숫자는 정수이며, 0 이상의 숫자이다.
배열을 사용하지 않고 변수와 반복문만 이용해서 처리한다.
 입력 예시
몇 개의 수를 입력하시겠습니까 ? 5
숫자 입력 : 12
숫자 입력 : 7
숫자 입력 : 23
숫자 입력 : 4
숫자 입력 : 15
*/
int main(void) {
	int maxNum;
	int minNum;
	int numbers;
	int number;
	int total = 0;
	int oddNum = 0;
	int evenNum = 0;
	printf("몇 개의 수를 입력 하시겠습니까 ? ");
	scanf("%d",&numbers);
	if (numbers >= 2 && numbers <= 10){
		for (int i = 0; i < numbers; i++) {
			printf("숫자 입력 : ");
			scanf("%d", &number);
			total = total + number;
			if (i == 0) {
				maxNum = number;
				minNum = number;
			}
			else {
				if (maxNum < number) {
					maxNum = number;
				}
				if (minNum > number) {
					minNum = number;
				}
			}
			if (number % 2 == 0) {
				evenNum++;
			}
			else{
				oddNum++;
			}
		}
	}
	else {
		printf("범위를 초과했습니다.");
	}
	printf("숫자의 합 : %d\n", total);
	printf("평균 : %f\n", (float)total / numbers);
	printf("가장 큰 수 : %d\n", maxNum);
	printf("가장 작은 수 : %d\n", minNum);
	printf("홀수의 수 : %d\n", oddNum);
	printf("짝수의 수 : %d\n", evenNum);


	return 0;
}
